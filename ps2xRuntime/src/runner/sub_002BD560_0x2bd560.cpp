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

// Function: sub_002BD560
// Address: 0x2bd560 - 0x2bd670
void sub_002BD560_0x2bd560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD560_0x2bd560");
#endif

    switch (ctx->pc) {
        case 0x2bd5a0u: goto label_2bd5a0;
        case 0x2bd5b0u: goto label_2bd5b0;
        case 0x2bd5bcu: goto label_2bd5bc;
        case 0x2bd5c8u: goto label_2bd5c8;
        case 0x2bd600u: goto label_2bd600;
        case 0x2bd620u: goto label_2bd620;
        case 0x2bd640u: goto label_2bd640;
        default: break;
    }

    ctx->pc = 0x2bd560u;

    // 0x2bd560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bd560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bd564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bd564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bd568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd56c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd570: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2bd570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2bd574: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2bd574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2bd578: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2bd578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd57c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD57Cu;
    {
        const bool branch_taken_0x2bd57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd57c) {
            ctx->pc = 0x2BD594u;
            goto label_2bd594;
        }
    }
    ctx->pc = 0x2BD584u;
    // 0x2bd584: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2bd584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd58c: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2BD58Cu;
    {
        const bool branch_taken_0x2bd58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd58c) {
            ctx->pc = 0x2BD648u;
            goto label_2bd648;
        }
    }
    ctx->pc = 0x2BD594u;
label_2bd594:
    // 0x2bd594: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2bd594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd598: 0xc09b618  jal         func_26D860
    ctx->pc = 0x2BD598u;
    SET_GPR_U32(ctx, 31, 0x2BD5A0u);
    ctx->pc = 0x26D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D860u, 0x2BD598u, 0x2BD5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD5A0u;
label_2bd5a0:
    // 0x2bd5a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bd5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5a8: 0xc0998dc  jal         func_266370
    ctx->pc = 0x2BD5A8u;
    SET_GPR_U32(ctx, 31, 0x2BD5B0u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x2BD5A8u, 0x2BD5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD5B0u;
label_2bd5b0:
    // 0x2bd5b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bd5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5b4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2BD5B4u;
    {
        const bool branch_taken_0x2bd5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd5b4) {
            ctx->pc = 0x2BD634u;
            goto label_2bd634;
        }
    }
    ctx->pc = 0x2BD5BCu;
label_2bd5bc:
    // 0x2bd5bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bd5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd5c0: 0xc09ce4c  jal         func_273930
    ctx->pc = 0x2BD5C0u;
    SET_GPR_U32(ctx, 31, 0x2BD5C8u);
    ctx->pc = 0x273930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273930u, 0x2BD5C0u, 0x2BD5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD5C8u;
label_2bd5c8:
    // 0x2bd5c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2bd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2bd5cc: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BD5CCu;
    {
        const bool branch_taken_0x2bd5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bd5cc) {
            ctx->pc = 0x2BD630u;
            goto label_2bd630;
        }
    }
    ctx->pc = 0x2BD5D4u;
    // 0x2bd5d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bd5d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd5d8: 0x0  nop
    ctx->pc = 0x2bd5d8u;
    // NOP
    // 0x2bd5dc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2bd5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2bd5e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2bd5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd5e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD5E4u;
    {
        const bool branch_taken_0x2bd5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd5e4) {
            ctx->pc = 0x2BD60Cu;
            goto label_2bd60c;
        }
    }
    ctx->pc = 0x2BD5ECu;
    // 0x2bd5ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bd5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd5f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bd5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd5f4: 0x240504e3  addiu       $a1, $zero, 0x4E3
    ctx->pc = 0x2bd5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1251));
    // 0x2bd5f8: 0xc042090  jal         func_108240
    ctx->pc = 0x2BD5F8u;
    SET_GPR_U32(ctx, 31, 0x2BD600u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2BD5F8u, 0x2BD600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD600u;
label_2bd600:
    // 0x2bd600: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2bd600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2bd604: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD604u;
    {
        const bool branch_taken_0x2bd604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd604) {
            ctx->pc = 0x2BD624u;
            goto label_2bd624;
        }
    }
    ctx->pc = 0x2BD60Cu;
label_2bd60c:
    // 0x2bd60c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bd60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd610: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bd610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd614: 0x240504e5  addiu       $a1, $zero, 0x4E5
    ctx->pc = 0x2bd614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1253));
    // 0x2bd618: 0xc042090  jal         func_108240
    ctx->pc = 0x2BD618u;
    SET_GPR_U32(ctx, 31, 0x2BD620u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2BD618u, 0x2BD620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD620u;
label_2bd620:
    // 0x2bd620: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2bd620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2bd624:
    // 0x2bd624: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2bd624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd628: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD628u;
    {
        const bool branch_taken_0x2bd628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd628) {
            ctx->pc = 0x2BD64Cu;
            goto label_2bd64c;
        }
    }
    ctx->pc = 0x2BD630u;
label_2bd630:
    // 0x2bd630: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2bd630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2bd634:
    // 0x2bd634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd638: 0xc0998c4  jal         func_266310
    ctx->pc = 0x2BD638u;
    SET_GPR_U32(ctx, 31, 0x2BD640u);
    ctx->pc = 0x266310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266310u, 0x2BD638u, 0x2BD640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD640u;
label_2bd640:
    // 0x2bd640: 0x1602ffde  bne         $s0, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2BD640u;
    {
        const bool branch_taken_0x2bd640 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd640) {
            ctx->pc = 0x2BD5BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd5bc;
        }
    }
    ctx->pc = 0x2BD648u;
label_2bd648:
    // 0x2bd648: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bd648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bd64c:
    // 0x2bd64c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bd64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd658: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2bd658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bd65c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD664u;
    // 0x2bd664: 0x0  nop
    ctx->pc = 0x2bd664u;
    // NOP
    // 0x2bd668: 0x0  nop
    ctx->pc = 0x2bd668u;
    // NOP
    // 0x2bd66c: 0x0  nop
    ctx->pc = 0x2bd66cu;
    // NOP
    ctx->pc = 0x2bd670u;
}
