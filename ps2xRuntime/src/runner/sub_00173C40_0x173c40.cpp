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

// Function: sub_00173C40
// Address: 0x173c40 - 0x173d10
void sub_00173C40_0x173c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173C40_0x173c40");
#endif

    switch (ctx->pc) {
        case 0x173c5cu: goto label_173c5c;
        case 0x173c68u: goto label_173c68;
        case 0x173c84u: goto label_173c84;
        case 0x173c94u: goto label_173c94;
        case 0x173ca4u: goto label_173ca4;
        case 0x173cc0u: goto label_173cc0;
        case 0x173ce0u: goto label_173ce0;
        case 0x173cf0u: goto label_173cf0;
        default: break;
    }

    ctx->pc = 0x173c40u;

    // 0x173c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x173c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x173c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173c4c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x173c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x173c50: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x173c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x173c54: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x173C54u;
    SET_GPR_U32(ctx, 31, 0x173C5Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x173C54u, 0x173C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C5Cu;
label_173c5c:
    // 0x173c5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c60: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x173C60u;
    SET_GPR_U32(ctx, 31, 0x173C68u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x173C60u, 0x173C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C68u;
label_173c68:
    // 0x173c68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x173c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x173c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173c70: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x173c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x173c74: 0x24a54838  addiu       $a1, $a1, 0x4838
    ctx->pc = 0x173c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18488));
    // 0x173c78: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x173c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173c7c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x173C7Cu;
    SET_GPR_U32(ctx, 31, 0x173C84u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x173C7Cu, 0x173C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C84u;
label_173c84:
    // 0x173c84: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x173c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x173c88: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x173c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173c8c: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x173C8Cu;
    SET_GPR_U32(ctx, 31, 0x173C94u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x173C8Cu, 0x173C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C94u;
label_173c94:
    // 0x173c94: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x173c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173c98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c9c: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x173C9Cu;
    SET_GPR_U32(ctx, 31, 0x173CA4u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x173C9Cu, 0x173CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CA4u;
label_173ca4:
    // 0x173ca4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x173ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173ca8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x173ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173cac: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x173cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x173cb0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x173cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x173cb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x173cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173cb8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x173CB8u;
    SET_GPR_U32(ctx, 31, 0x173CC0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x173CB8u, 0x173CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CC0u;
label_173cc0:
    // 0x173cc0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x173cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173cc4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x173cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173cc8: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x173cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x173ccc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x173cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x173cd0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x173cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173cd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x173cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173cd8: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x173CD8u;
    SET_GPR_U32(ctx, 31, 0x173CE0u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x173CD8u, 0x173CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CE0u;
label_173ce0:
    // 0x173ce0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x173ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173ce4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x173ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x173ce8: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x173CE8u;
    SET_GPR_U32(ctx, 31, 0x173CF0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x173CE8u, 0x173CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CF0u;
label_173cf0:
    // 0x173cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173cf8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x173cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x173CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173D04u;
    // 0x173d04: 0x0  nop
    ctx->pc = 0x173d04u;
    // NOP
    // 0x173d08: 0x0  nop
    ctx->pc = 0x173d08u;
    // NOP
    // 0x173d0c: 0x0  nop
    ctx->pc = 0x173d0cu;
    // NOP
    ctx->pc = 0x173d10u;
}
