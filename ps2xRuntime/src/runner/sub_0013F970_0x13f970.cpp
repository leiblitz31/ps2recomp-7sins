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

// Function: sub_0013F970
// Address: 0x13f970 - 0x13fa60
void sub_0013F970_0x13f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F970_0x13f970");
#endif

    switch (ctx->pc) {
        case 0x13f99cu: goto label_13f99c;
        case 0x13f9b0u: goto label_13f9b0;
        case 0x13f9c4u: goto label_13f9c4;
        case 0x13f9d8u: goto label_13f9d8;
        case 0x13f9f4u: goto label_13f9f4;
        case 0x13fa04u: goto label_13fa04;
        case 0x13fa2cu: goto label_13fa2c;
        default: break;
    }

    ctx->pc = 0x13f970u;

    // 0x13f970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13f970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13f974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13f974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13f978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13f97c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f984: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x13f984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x13f988: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x13f988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x13f98c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13f990: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13f990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13f994: 0xc042290  jal         func_108A40
    ctx->pc = 0x13F994u;
    SET_GPR_U32(ctx, 31, 0x13F99Cu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x13F994u, 0x13F99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F99Cu;
label_13f99c:
    // 0x13f99c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13f99cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f9a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13f9a4: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13f9a8: 0xc042288  jal         func_108A20
    ctx->pc = 0x13F9A8u;
    SET_GPR_U32(ctx, 31, 0x13F9B0u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x13F9A8u, 0x13F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9B0u;
label_13f9b0:
    // 0x13f9b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13f9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f9b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f9b8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x13f9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13f9bc: 0xc050540  jal         func_141500
    ctx->pc = 0x13F9BCu;
    SET_GPR_U32(ctx, 31, 0x13F9C4u);
    ctx->pc = 0x141500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141500u, 0x13F9BCu, 0x13F9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9C4u;
label_13f9c4:
    // 0x13f9c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13f9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f9c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13f9cc: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13f9d0: 0xc042288  jal         func_108A20
    ctx->pc = 0x13F9D0u;
    SET_GPR_U32(ctx, 31, 0x13F9D8u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x13F9D0u, 0x13F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9D8u;
label_13f9d8:
    // 0x13f9d8: 0x12220017  beq         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13F9D8u;
    {
        const bool branch_taken_0x13f9d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f9d8) {
            ctx->pc = 0x13FA38u;
            goto label_13fa38;
        }
    }
    ctx->pc = 0x13F9E0u;
    // 0x13f9e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13f9e4: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13f9e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f9ec: 0xc04fe98  jal         func_13FA60
    ctx->pc = 0x13F9ECu;
    SET_GPR_U32(ctx, 31, 0x13F9F4u);
    ctx->pc = 0x13FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FA60u, 0x13F9ECu, 0x13F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9F4u;
label_13f9f4:
    // 0x13f9f4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x13f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13f9f8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x13f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13f9fc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13F9FCu;
    SET_GPR_U32(ctx, 31, 0x13FA04u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13F9FCu, 0x13FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA04u;
label_13fa04:
    // 0x13fa04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13fa04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa08: 0x10100008  beq         $zero, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FA08u;
    {
        const bool branch_taken_0x13fa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x13fa08) {
            ctx->pc = 0x13FA2Cu;
            goto label_13fa2c;
        }
    }
    ctx->pc = 0x13FA10u;
    // 0x13fa10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fa14: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x13fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13fa18: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13FA18u;
    {
        const bool branch_taken_0x13fa18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fa18) {
            ctx->pc = 0x13FA2Cu;
            goto label_13fa2c;
        }
    }
    ctx->pc = 0x13FA20u;
    // 0x13fa20: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fa24: 0xc04fed4  jal         func_13FB50
    ctx->pc = 0x13FA24u;
    SET_GPR_U32(ctx, 31, 0x13FA2Cu);
    ctx->pc = 0x13FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB50u, 0x13FA24u, 0x13FA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA2Cu;
label_13fa2c:
    // 0x13fa2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fa30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13FA30u;
    {
        const bool branch_taken_0x13fa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fa30) {
            ctx->pc = 0x13FA3Cu;
            goto label_13fa3c;
        }
    }
    ctx->pc = 0x13FA38u;
label_13fa38:
    // 0x13fa38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13fa38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fa3c:
    // 0x13fa3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13fa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fa40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13fa40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fa44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13fa44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fa48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13fa48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fa4c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13fa4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fa50: 0x3e00008  jr          $ra
    ctx->pc = 0x13FA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FA58u;
    // 0x13fa58: 0x0  nop
    ctx->pc = 0x13fa58u;
    // NOP
    // 0x13fa5c: 0x0  nop
    ctx->pc = 0x13fa5cu;
    // NOP
    ctx->pc = 0x13fa60u;
}
