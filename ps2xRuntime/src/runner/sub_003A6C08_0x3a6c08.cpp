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

// Function: sub_003A6C08
// Address: 0x3a6c08 - 0x3a6c88
void sub_003A6C08_0x3a6c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6C08_0x3a6c08");
#endif

    switch (ctx->pc) {
        case 0x3a6c18u: goto label_3a6c18;
        case 0x3a6c3cu: goto label_3a6c3c;
        case 0x3a6c58u: goto label_3a6c58;
        case 0x3a6c64u: goto label_3a6c64;
        case 0x3a6c74u: goto label_3a6c74;
        default: break;
    }

    ctx->pc = 0x3a6c08u;

    // 0x3a6c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6c0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a6c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a6c10: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x3A6C10u;
    SET_GPR_U32(ctx, 31, 0x3A6C18u);
    ctx->pc = 0x3A6C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C10u;
    // 0x3a6c14: 0x24041001  addiu       $a0, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x3A6C10u, 0x3A6C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C18u;
label_3a6c18:
    // 0x3a6c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a6c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6c1c: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x3a6c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x3a6c20: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3a6c24: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3a6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x3a6c28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a6c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a6c2c: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A6C2Cu;
    {
        const bool branch_taken_0x3a6c2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C2Cu;
        // 0x3a6c30: 0xac64005c  sw          $a0, 0x5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c2c) {
            ctx->pc = 0x3A6C6Cu;
            goto label_3a6c6c;
        }
    }
    ctx->pc = 0x3A6C34u;
    // 0x3a6c34: 0xc0e786e  jal         func_39E1B8
    ctx->pc = 0x3A6C34u;
    SET_GPR_U32(ctx, 31, 0x3A6C3Cu);
    ctx->pc = 0x3A6C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C34u;
    // 0x3a6c38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E1B8u, 0x3A6C34u, 0x3A6C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C3Cu;
label_3a6c3c:
    // 0x3a6c3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a6c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6c40: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3a6c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3a6c44: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3a6c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3a6c48: 0x24a5bf90  addiu       $a1, $a1, -0x4070
    ctx->pc = 0x3a6c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950800));
    // 0x3a6c4c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a6c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a6c50: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3A6C50u;
    SET_GPR_U32(ctx, 31, 0x3A6C58u);
    ctx->pc = 0x3A6C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C50u;
    // 0x3a6c54: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3A6C50u, 0x3A6C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C58u;
label_3a6c58:
    // 0x3a6c58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a6c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6c5c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3A6C5Cu;
    SET_GPR_U32(ctx, 31, 0x3A6C64u);
    ctx->pc = 0x3A6C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C5Cu;
    // 0x3a6c60: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3A6C5Cu, 0x3A6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C64u;
label_3a6c64:
    // 0x3a6c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6C64u;
    {
        const bool branch_taken_0x3a6c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C64u;
        // 0x3a6c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c64) {
            ctx->pc = 0x3A6C78u;
            goto label_3a6c78;
        }
    }
    ctx->pc = 0x3A6C6Cu;
label_3a6c6c:
    // 0x3a6c6c: 0xc0e786e  jal         func_39E1B8
    ctx->pc = 0x3A6C6Cu;
    SET_GPR_U32(ctx, 31, 0x3A6C74u);
    ctx->pc = 0x39E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E1B8u, 0x3A6C6Cu, 0x3A6C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C74u;
label_3a6c74:
    // 0x3a6c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a6c78:
    // 0x3a6c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a6c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C7Cu;
        // 0x3a6c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6C84u;
    // 0x3a6c84: 0x0  nop
    ctx->pc = 0x3a6c84u;
    // NOP
    ctx->pc = 0x3a6c88u;
}
