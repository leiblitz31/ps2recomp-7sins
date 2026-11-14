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

// Function: sub_00465690
// Address: 0x465690 - 0x465750
void sub_00465690_0x465690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465690_0x465690");
#endif

    switch (ctx->pc) {
        case 0x4656bcu: goto label_4656bc;
        case 0x4656d0u: goto label_4656d0;
        case 0x4656dcu: goto label_4656dc;
        case 0x4656ecu: goto label_4656ec;
        case 0x465708u: goto label_465708;
        case 0x46572cu: goto label_46572c;
        default: break;
    }

    ctx->pc = 0x465690u;

    // 0x465690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x465690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x465694: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x465694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x465698: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x465698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46569c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46569cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4656a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4656a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4656a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4656a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4656a8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x4656a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x4656ac: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x4656acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x4656b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4656b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4656b4: 0xc042514  jal         func_109450
    ctx->pc = 0x4656B4u;
    SET_GPR_U32(ctx, 31, 0x4656BCu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x4656B4u, 0x4656BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4656BCu;
label_4656bc:
    // 0x4656bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4656bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4656c0: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x4656c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4656c4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4656c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4656c8: 0xc11939c  jal         func_464E70
    ctx->pc = 0x4656C8u;
    SET_GPR_U32(ctx, 31, 0x4656D0u);
    ctx->pc = 0x464E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464E70u, 0x4656C8u, 0x4656D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4656D0u;
label_4656d0:
    // 0x4656d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4656d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4656d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4656D4u;
    {
        const bool branch_taken_0x4656d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4656d4) {
            ctx->pc = 0x465710u;
            goto label_465710;
        }
    }
    ctx->pc = 0x4656DCu;
label_4656dc:
    // 0x4656dc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4656dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4656e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4656e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4656e4: 0xc043544  jal         func_10D510
    ctx->pc = 0x4656E4u;
    SET_GPR_U32(ctx, 31, 0x4656ECu);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x4656E4u, 0x4656ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4656ECu;
label_4656ec:
    // 0x4656ec: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x4656ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4656f0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x4656f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4656f4: 0x325300ff  andi        $s3, $s2, 0xFF
    ctx->pc = 0x4656f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x4656f8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4656f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4656fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4656fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465700: 0xc05e064  jal         func_178190
    ctx->pc = 0x465700u;
    SET_GPR_U32(ctx, 31, 0x465708u);
    ctx->pc = 0x178190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178190u, 0x465700u, 0x465708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465708u;
label_465708:
    // 0x465708: 0xa4530000  sh          $s3, 0x0($v0)
    ctx->pc = 0x465708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x46570c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x46570cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_465710:
    // 0x465710: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x465710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x465714: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x465714u;
    {
        const bool branch_taken_0x465714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465714) {
            ctx->pc = 0x4656DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4656dc;
        }
    }
    ctx->pc = 0x46571Cu;
    // 0x46571c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x46571cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x465720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x465720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465724: 0xc061d64  jal         func_187590
    ctx->pc = 0x465724u;
    SET_GPR_U32(ctx, 31, 0x46572Cu);
    ctx->pc = 0x187590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187590u, 0x465724u, 0x46572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46572Cu;
label_46572c:
    // 0x46572c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x46572cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x465730: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x465730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x465734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x465734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x465738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46573c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46573cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465740: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x465740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x465744: 0x3e00008  jr          $ra
    ctx->pc = 0x465744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46574Cu;
    // 0x46574c: 0x0  nop
    ctx->pc = 0x46574cu;
    // NOP
    ctx->pc = 0x465750u;
}
