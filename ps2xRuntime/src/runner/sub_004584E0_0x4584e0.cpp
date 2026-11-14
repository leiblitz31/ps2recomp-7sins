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

// Function: sub_004584E0
// Address: 0x4584e0 - 0x458580
void sub_004584E0_0x4584e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004584E0_0x4584e0");
#endif

    switch (ctx->pc) {
        case 0x45851cu: goto label_45851c;
        case 0x458538u: goto label_458538;
        default: break;
    }

    ctx->pc = 0x4584e0u;

    // 0x4584e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4584e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4584e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4584e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4584e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4584e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4584ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4584ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4584f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4584f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4584f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4584f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4584f8: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x4584f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x4584fc: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x4584fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x458500: 0x26738060  addiu       $s3, $s3, -0x7FA0
    ctx->pc = 0x458500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934624));
    // 0x458504: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x458504u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x458508: 0x261080d0  addiu       $s0, $s0, -0x7F30
    ctx->pc = 0x458508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934736));
    // 0x45850c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x45850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x458510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x458510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458514: 0xc04f000  jal         func_13C000
    ctx->pc = 0x458514u;
    SET_GPR_U32(ctx, 31, 0x45851Cu);
    ctx->pc = 0x13C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C000u, 0x458514u, 0x45851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45851Cu;
label_45851c:
    // 0x45851c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45851cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x458520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458524: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x458524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x458528: 0x83a7005c  lb          $a3, 0x5C($sp)
    ctx->pc = 0x458528u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x45852c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x45852cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458530: 0xc04f018  jal         func_13C060
    ctx->pc = 0x458530u;
    SET_GPR_U32(ctx, 31, 0x458538u);
    ctx->pc = 0x13C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C060u, 0x458530u, 0x458538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458538u;
label_458538:
    // 0x458538: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x458538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45853c: 0x16300004  bne         $s1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45853Cu;
    {
        const bool branch_taken_0x45853c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x45853c) {
            ctx->pc = 0x458550u;
            goto label_458550;
        }
    }
    ctx->pc = 0x458544u;
    // 0x458544: 0x8e12fffc  lw          $s2, -0x4($s0)
    ctx->pc = 0x458544u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x458548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x458548u;
    {
        const bool branch_taken_0x458548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458548) {
            ctx->pc = 0x458554u;
            goto label_458554;
        }
    }
    ctx->pc = 0x458550u;
label_458550:
    // 0x458550: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x458550u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_458554:
    // 0x458554: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x458554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458558: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x458558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45855c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45855cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x458560: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x458560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x458564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x458564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45856c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x45856cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x458570: 0x3e00008  jr          $ra
    ctx->pc = 0x458570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458578u;
    // 0x458578: 0x0  nop
    ctx->pc = 0x458578u;
    // NOP
    // 0x45857c: 0x0  nop
    ctx->pc = 0x45857cu;
    // NOP
    ctx->pc = 0x458580u;
}
