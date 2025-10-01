class Dada_InHandsPlaceable_Colorbase : ItemBase
{
    override bool IsTakeable()
    {
        return true; 
    }

    override bool IsHealthVisible()
    {
        return false;
    }

    override void SetActions()
    {
        super.SetActions();

        AddAction(ActionTogglePlaceObject);
        AddAction(ActionPlaceObject);
        AddAction(ActionTakeItem);
		AddAction(ActionTakeItemToHands);
    }
}