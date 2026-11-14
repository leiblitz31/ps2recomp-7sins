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

// Function: sub_004655A0
// Address: 0x4655a0 - 0x465690
void sub_004655A0_0x4655a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004655A0_0x4655a0");
#endif

    switch (ctx->pc) {
        case 0x4655ccu: goto label_4655cc;
        case 0x4655d8u: goto label_4655d8;
        case 0x4655ecu: goto label_4655ec;
        case 0x4655f8u: goto label_4655f8;
        case 0x465608u: goto label_465608;
        case 0x465624u: goto label_465624;
        case 0x465648u: goto label_465648;
        case 0x465658u: goto label_465658;
        case 0x465668u: goto label_465668;
        default: break;
    }

    ctx->pc = 0x4655a0u;

    // 0x4655a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4655a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4655a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4655a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4655a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4655a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4655ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4655acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4655b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4655b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4655b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4655b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4655b8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x4655b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x4655bc: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x4655bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x4655c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4655c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4655c4: 0xc0495d4  jal         func_125750
    ctx->pc = 0x4655C4u;
    SET_GPR_U32(ctx, 31, 0x4655CCu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x4655C4u, 0x4655CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4655CCu;
label_4655cc:
    // 0x4655cc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x4655ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4655d0: 0xc042514  jal         func_109450
    ctx->pc = 0x4655D0u;
    SET_GPR_U32(ctx, 31, 0x4655D8u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x4655D0u, 0x4655D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4655D8u;
label_4655d8:
    // 0x4655d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4655d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4655dc: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x4655dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4655e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4655e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4655e4: 0xc11939c  jal         func_464E70
    ctx->pc = 0x4655E4u;
    SET_GPR_U32(ctx, 31, 0x4655ECu);
    ctx->pc = 0x464E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464E70u, 0x4655E4u, 0x4655ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4655ECu;
label_4655ec:
    // 0x4655ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4655ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4655f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4655F0u;
    {
        const bool branch_taken_0x4655f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4655f0) {
            ctx->pc = 0x46562Cu;
            goto label_46562c;
        }
    }
    ctx->pc = 0x4655F8u;
label_4655f8:
    // 0x4655f8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x4655f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4655fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4655fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465600: 0xc043544  jal         func_10D510
    ctx->pc = 0x465600u;
    SET_GPR_U32(ctx, 31, 0x465608u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x465600u, 0x465608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465608u;
label_465608:
    // 0x465608: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x465608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46560c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x46560cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x465610: 0x325300ff  andi        $s3, $s2, 0xFF
    ctx->pc = 0x465610u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x465614: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x465614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x465618: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x465618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46561c: 0xc05e064  jal         func_178190
    ctx->pc = 0x46561Cu;
    SET_GPR_U32(ctx, 31, 0x465624u);
    ctx->pc = 0x178190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178190u, 0x46561Cu, 0x465624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465624u;
label_465624:
    // 0x465624: 0xa4530000  sh          $s3, 0x0($v0)
    ctx->pc = 0x465624u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x465628: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x465628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_46562c:
    // 0x46562c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x46562cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x465630: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x465630u;
    {
        const bool branch_taken_0x465630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465630) {
            ctx->pc = 0x4655F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4655f8;
        }
    }
    ctx->pc = 0x465638u;
    // 0x465638: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x465638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46563c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46563cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465640: 0xc061d64  jal         func_187590
    ctx->pc = 0x465640u;
    SET_GPR_U32(ctx, 31, 0x465648u);
    ctx->pc = 0x187590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187590u, 0x465640u, 0x465648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465648u;
label_465648:
    // 0x465648: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x465648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46564c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x46564cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x465650: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x465650u;
    SET_GPR_U32(ctx, 31, 0x465658u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x465650u, 0x465658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465658u;
label_465658:
    // 0x465658: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x465658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46565c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46565cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x465660: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x465660u;
    SET_GPR_U32(ctx, 31, 0x465668u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x465660u, 0x465668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465668u;
label_465668:
    // 0x465668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x465668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46566c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x46566cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x465670: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x465670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x465674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x465674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x465678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46567c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46567cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465680: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x465680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x465684: 0x3e00008  jr          $ra
    ctx->pc = 0x465684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46568Cu;
    // 0x46568c: 0x0  nop
    ctx->pc = 0x46568cu;
    // NOP
    ctx->pc = 0x465690u;
}
