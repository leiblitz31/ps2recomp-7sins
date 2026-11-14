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

// Function: sub_0015F600
// Address: 0x15f600 - 0x15f710
void sub_0015F600_0x15f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F600_0x15f600");
#endif

    switch (ctx->pc) {
        case 0x15f628u: goto label_15f628;
        case 0x15f640u: goto label_15f640;
        case 0x15f654u: goto label_15f654;
        case 0x15f684u: goto label_15f684;
        case 0x15f698u: goto label_15f698;
        case 0x15f6acu: goto label_15f6ac;
        case 0x15f6c4u: goto label_15f6c4;
        case 0x15f6f4u: goto label_15f6f4;
        default: break;
    }

    ctx->pc = 0x15f600u;

    // 0x15f600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15f604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f608: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15f608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15f60c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x15f610: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x15f610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x15f614: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f618: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15f618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15f61c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x15f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f620: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15F620u;
    SET_GPR_U32(ctx, 31, 0x15F628u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15F620u, 0x15F628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F628u;
label_15f628:
    // 0x15f628: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f62c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f630: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15f630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15f634: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x15f634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15f638: 0xc08c744  jal         func_231D10
    ctx->pc = 0x15F638u;
    SET_GPR_U32(ctx, 31, 0x15F640u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x15F638u, 0x15F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F640u;
label_15f640:
    // 0x15f640: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f644: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15f644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15f648: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15f648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f64c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15F64Cu;
    SET_GPR_U32(ctx, 31, 0x15F654u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15F64Cu, 0x15F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F654u;
label_15f654:
    // 0x15f654: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f658: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15f658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f65c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15f65cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15f660: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15f660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15f664: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15f664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15f668: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15f668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15f66c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f670: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x15f670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15f674: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f678: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f67c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15F67Cu;
    SET_GPR_U32(ctx, 31, 0x15F684u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15F67Cu, 0x15F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F684u;
label_15f684:
    // 0x15f684: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f688: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15f688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15f68c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x15f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f690: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15F690u;
    SET_GPR_U32(ctx, 31, 0x15F698u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15F690u, 0x15F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F698u;
label_15f698:
    // 0x15f698: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f69c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f6a0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15f6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15f6a4: 0xc08c49c  jal         func_231270
    ctx->pc = 0x15F6A4u;
    SET_GPR_U32(ctx, 31, 0x15F6ACu);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x15F6A4u, 0x15F6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F6ACu;
label_15f6ac:
    // 0x15f6ac: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x15f6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x15f6b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f6b4: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15f6b8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f6bc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15F6BCu;
    SET_GPR_U32(ctx, 31, 0x15F6C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15F6BCu, 0x15F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F6C4u;
label_15f6c4:
    // 0x15f6c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f6c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f6cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15f6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15f6d0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15f6d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15f6d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15f6d8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15f6dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15f6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f6e0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x15f6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15f6e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f6e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f6e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f6e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f6ec: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15F6ECu;
    SET_GPR_U32(ctx, 31, 0x15F6F4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15F6ECu, 0x15F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F6F4u;
label_15f6f4:
    // 0x15f6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f6f8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15f6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x15F6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F704u;
    // 0x15f704: 0x0  nop
    ctx->pc = 0x15f704u;
    // NOP
    // 0x15f708: 0x0  nop
    ctx->pc = 0x15f708u;
    // NOP
    // 0x15f70c: 0x0  nop
    ctx->pc = 0x15f70cu;
    // NOP
    ctx->pc = 0x15f710u;
}
