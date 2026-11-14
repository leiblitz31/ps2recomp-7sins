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

// Function: sub_00298BB0
// Address: 0x298bb0 - 0x298c70
void sub_00298BB0_0x298bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298BB0_0x298bb0");
#endif

    switch (ctx->pc) {
        case 0x298bf4u: goto label_298bf4;
        case 0x298c1cu: goto label_298c1c;
        case 0x298c30u: goto label_298c30;
        case 0x298c40u: goto label_298c40;
        default: break;
    }

    ctx->pc = 0x298bb0u;

    // 0x298bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298bb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x298bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x298bbc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x298bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x298bc0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298bc4: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x298bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x298bc8: 0x10030022  beq         $zero, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x298BC8u;
    {
        const bool branch_taken_0x298bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x298bc8) {
            ctx->pc = 0x298C54u;
            goto label_298c54;
        }
    }
    ctx->pc = 0x298BD0u;
    // 0x298bd0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298bd4: 0x9063004c  lbu         $v1, 0x4C($v1)
    ctx->pc = 0x298bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x298bd8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x298bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x298bdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298be0: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x298BE0u;
    {
        const bool branch_taken_0x298be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x298be0) {
            ctx->pc = 0x298C54u;
            goto label_298c54;
        }
    }
    ctx->pc = 0x298BE8u;
    // 0x298be8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x298be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298bec: 0xc0a6228  jal         func_2988A0
    ctx->pc = 0x298BECu;
    SET_GPR_U32(ctx, 31, 0x298BF4u);
    ctx->pc = 0x2988A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2988A0u, 0x298BECu, 0x298BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298BF4u;
label_298bf4:
    // 0x298bf4: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x298bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298bf8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x298bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x298bfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298c00: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x298c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298c04: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x298c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x298c08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298c0c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x298c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298c10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x298c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298c14: 0xc123484  jal         func_48D210
    ctx->pc = 0x298C14u;
    SET_GPR_U32(ctx, 31, 0x298C1Cu);
    ctx->pc = 0x48D210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D210u, 0x298C14u, 0x298C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C1Cu;
label_298c1c:
    // 0x298c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298c20: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x298c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298c24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x298c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298c28: 0xc12346c  jal         func_48D1B0
    ctx->pc = 0x298C28u;
    SET_GPR_U32(ctx, 31, 0x298C30u);
    ctx->pc = 0x48D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D1B0u, 0x298C28u, 0x298C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C30u;
label_298c30:
    // 0x298c30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298c34: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x298c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298c38: 0xc123208  jal         func_48C820
    ctx->pc = 0x298C38u;
    SET_GPR_U32(ctx, 31, 0x298C40u);
    ctx->pc = 0x48C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C820u, 0x298C38u, 0x298C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C40u;
label_298c40:
    // 0x298c40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298c44: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298c48: 0xa064004c  sb          $a0, 0x4C($v1)
    ctx->pc = 0x298c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x298c4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298c50: 0xa060004d  sb          $zero, 0x4D($v1)
    ctx->pc = 0x298c50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 77), (uint8_t)GPR_U32(ctx, 0));
label_298c54:
    // 0x298c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298c58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x298C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298C64u;
    // 0x298c64: 0x0  nop
    ctx->pc = 0x298c64u;
    // NOP
    // 0x298c68: 0x0  nop
    ctx->pc = 0x298c68u;
    // NOP
    // 0x298c6c: 0x0  nop
    ctx->pc = 0x298c6cu;
    // NOP
    ctx->pc = 0x298c70u;
}
