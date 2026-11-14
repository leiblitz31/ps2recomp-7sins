#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049F330
// Address: 0x49f330 - 0x49f370
void sub_0049F330_0x49f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F330_0x49f330");
#endif

    switch (ctx->pc) {
        case 0x49f330u: goto label_49f330;
        case 0x49f334u: goto label_49f334;
        case 0x49f338u: goto label_49f338;
        case 0x49f33cu: goto label_49f33c;
        case 0x49f340u: goto label_49f340;
        case 0x49f344u: goto label_49f344;
        case 0x49f348u: goto label_49f348;
        case 0x49f34cu: goto label_49f34c;
        case 0x49f350u: goto label_49f350;
        case 0x49f354u: goto label_49f354;
        case 0x49f358u: goto label_49f358;
        case 0x49f35cu: goto label_49f35c;
        case 0x49f360u: goto label_49f360;
        case 0x49f364u: goto label_49f364;
        case 0x49f368u: goto label_49f368;
        case 0x49f36cu: goto label_49f36c;
        default: break;
    }

    ctx->pc = 0x49f330u;

label_49f330:
    // 0x49f330: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x49f330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_49f334:
    // 0x49f334: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49f338:
    // 0x49f338: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x49f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_49f33c:
    // 0x49f33c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49f340:
    // 0x49f340: 0x40f809  jalr        $v0
label_49f344:
    if (ctx->pc == 0x49F344u) {
        ctx->pc = 0x49F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F340u;
        // 0x49f344: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F348u;
        goto label_49f348;
    }
    ctx->pc = 0x49F340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49F348u);
        ctx->pc = 0x49F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F340u;
        // 0x49f344: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F340u, 0x49F348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49F348u;
label_49f348:
    // 0x49f348: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49f348u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49f34c:
    // 0x49f34c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_49f350:
    if (ctx->pc == 0x49F350u) {
        ctx->pc = 0x49F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F34Cu;
        // 0x49f350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F354u;
        goto label_49f354;
    }
    ctx->pc = 0x49F34Cu;
    {
        const bool branch_taken_0x49f34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F34Cu;
        // 0x49f350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f34c) {
            ctx->pc = 0x49F364u;
            goto label_49f364;
        }
    }
    ctx->pc = 0x49F354u;
label_49f354:
    // 0x49f354: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x49f354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_49f358:
    // 0x49f358: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x49f358u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_49f35c:
    // 0x49f35c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x49f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_49f360:
    // 0x49f360: 0xac43fffc  sw          $v1, -0x4($v0)
    ctx->pc = 0x49f360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 3));
label_49f364:
    // 0x49f364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49f368:
    // 0x49f368: 0x3e00008  jr          $ra
label_49f36c:
    if (ctx->pc == 0x49F36Cu) {
        ctx->pc = 0x49F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F368u;
        // 0x49f36c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49F370u;
        goto label_fallthrough_0x49f368;
    }
    ctx->pc = 0x49F368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F368u;
        // 0x49f36c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x49f368:
    ctx->pc = 0x49F370u;
}
