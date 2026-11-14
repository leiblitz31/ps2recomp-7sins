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

// Function: sub_0018E8A0
// Address: 0x18e8a0 - 0x18ebd0
void sub_0018E8A0_0x18e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E8A0_0x18e8a0");
#endif

    switch (ctx->pc) {
        case 0x18e8a0u: goto label_18e8a0;
        case 0x18e8a4u: goto label_18e8a4;
        case 0x18e8a8u: goto label_18e8a8;
        case 0x18e8acu: goto label_18e8ac;
        case 0x18e8b0u: goto label_18e8b0;
        case 0x18e8b4u: goto label_18e8b4;
        case 0x18e8b8u: goto label_18e8b8;
        case 0x18e8bcu: goto label_18e8bc;
        case 0x18e8c0u: goto label_18e8c0;
        case 0x18e8c4u: goto label_18e8c4;
        case 0x18e8c8u: goto label_18e8c8;
        case 0x18e8ccu: goto label_18e8cc;
        case 0x18e8d0u: goto label_18e8d0;
        case 0x18e8d4u: goto label_18e8d4;
        case 0x18e8d8u: goto label_18e8d8;
        case 0x18e8dcu: goto label_18e8dc;
        case 0x18e8e0u: goto label_18e8e0;
        case 0x18e8e4u: goto label_18e8e4;
        case 0x18e8e8u: goto label_18e8e8;
        case 0x18e8ecu: goto label_18e8ec;
        case 0x18e8f0u: goto label_18e8f0;
        case 0x18e8f4u: goto label_18e8f4;
        case 0x18e8f8u: goto label_18e8f8;
        case 0x18e8fcu: goto label_18e8fc;
        case 0x18e900u: goto label_18e900;
        case 0x18e904u: goto label_18e904;
        case 0x18e908u: goto label_18e908;
        case 0x18e90cu: goto label_18e90c;
        case 0x18e910u: goto label_18e910;
        case 0x18e914u: goto label_18e914;
        case 0x18e918u: goto label_18e918;
        case 0x18e91cu: goto label_18e91c;
        case 0x18e920u: goto label_18e920;
        case 0x18e924u: goto label_18e924;
        case 0x18e928u: goto label_18e928;
        case 0x18e92cu: goto label_18e92c;
        case 0x18e930u: goto label_18e930;
        case 0x18e934u: goto label_18e934;
        case 0x18e938u: goto label_18e938;
        case 0x18e93cu: goto label_18e93c;
        case 0x18e940u: goto label_18e940;
        case 0x18e944u: goto label_18e944;
        case 0x18e948u: goto label_18e948;
        case 0x18e94cu: goto label_18e94c;
        case 0x18e950u: goto label_18e950;
        case 0x18e954u: goto label_18e954;
        case 0x18e958u: goto label_18e958;
        case 0x18e95cu: goto label_18e95c;
        case 0x18e960u: goto label_18e960;
        case 0x18e964u: goto label_18e964;
        case 0x18e968u: goto label_18e968;
        case 0x18e96cu: goto label_18e96c;
        case 0x18e970u: goto label_18e970;
        case 0x18e974u: goto label_18e974;
        case 0x18e978u: goto label_18e978;
        case 0x18e97cu: goto label_18e97c;
        case 0x18e980u: goto label_18e980;
        case 0x18e984u: goto label_18e984;
        case 0x18e988u: goto label_18e988;
        case 0x18e98cu: goto label_18e98c;
        case 0x18e990u: goto label_18e990;
        case 0x18e994u: goto label_18e994;
        case 0x18e998u: goto label_18e998;
        case 0x18e99cu: goto label_18e99c;
        case 0x18e9a0u: goto label_18e9a0;
        case 0x18e9a4u: goto label_18e9a4;
        case 0x18e9a8u: goto label_18e9a8;
        case 0x18e9acu: goto label_18e9ac;
        case 0x18e9b0u: goto label_18e9b0;
        case 0x18e9b4u: goto label_18e9b4;
        case 0x18e9b8u: goto label_18e9b8;
        case 0x18e9bcu: goto label_18e9bc;
        case 0x18e9c0u: goto label_18e9c0;
        case 0x18e9c4u: goto label_18e9c4;
        case 0x18e9c8u: goto label_18e9c8;
        case 0x18e9ccu: goto label_18e9cc;
        case 0x18e9d0u: goto label_18e9d0;
        case 0x18e9d4u: goto label_18e9d4;
        case 0x18e9d8u: goto label_18e9d8;
        case 0x18e9dcu: goto label_18e9dc;
        case 0x18e9e0u: goto label_18e9e0;
        case 0x18e9e4u: goto label_18e9e4;
        case 0x18e9e8u: goto label_18e9e8;
        case 0x18e9ecu: goto label_18e9ec;
        case 0x18e9f0u: goto label_18e9f0;
        case 0x18e9f4u: goto label_18e9f4;
        case 0x18e9f8u: goto label_18e9f8;
        case 0x18e9fcu: goto label_18e9fc;
        case 0x18ea00u: goto label_18ea00;
        case 0x18ea04u: goto label_18ea04;
        case 0x18ea08u: goto label_18ea08;
        case 0x18ea0cu: goto label_18ea0c;
        case 0x18ea10u: goto label_18ea10;
        case 0x18ea14u: goto label_18ea14;
        case 0x18ea18u: goto label_18ea18;
        case 0x18ea1cu: goto label_18ea1c;
        case 0x18ea20u: goto label_18ea20;
        case 0x18ea24u: goto label_18ea24;
        case 0x18ea28u: goto label_18ea28;
        case 0x18ea2cu: goto label_18ea2c;
        case 0x18ea30u: goto label_18ea30;
        case 0x18ea34u: goto label_18ea34;
        case 0x18ea38u: goto label_18ea38;
        case 0x18ea3cu: goto label_18ea3c;
        case 0x18ea40u: goto label_18ea40;
        case 0x18ea44u: goto label_18ea44;
        case 0x18ea48u: goto label_18ea48;
        case 0x18ea4cu: goto label_18ea4c;
        case 0x18ea50u: goto label_18ea50;
        case 0x18ea54u: goto label_18ea54;
        case 0x18ea58u: goto label_18ea58;
        case 0x18ea5cu: goto label_18ea5c;
        case 0x18ea60u: goto label_18ea60;
        case 0x18ea64u: goto label_18ea64;
        case 0x18ea68u: goto label_18ea68;
        case 0x18ea6cu: goto label_18ea6c;
        case 0x18ea70u: goto label_18ea70;
        case 0x18ea74u: goto label_18ea74;
        case 0x18ea78u: goto label_18ea78;
        case 0x18ea7cu: goto label_18ea7c;
        case 0x18ea80u: goto label_18ea80;
        case 0x18ea84u: goto label_18ea84;
        case 0x18ea88u: goto label_18ea88;
        case 0x18ea8cu: goto label_18ea8c;
        case 0x18ea90u: goto label_18ea90;
        case 0x18ea94u: goto label_18ea94;
        case 0x18ea98u: goto label_18ea98;
        case 0x18ea9cu: goto label_18ea9c;
        case 0x18eaa0u: goto label_18eaa0;
        case 0x18eaa4u: goto label_18eaa4;
        case 0x18eaa8u: goto label_18eaa8;
        case 0x18eaacu: goto label_18eaac;
        case 0x18eab0u: goto label_18eab0;
        case 0x18eab4u: goto label_18eab4;
        case 0x18eab8u: goto label_18eab8;
        case 0x18eabcu: goto label_18eabc;
        case 0x18eac0u: goto label_18eac0;
        case 0x18eac4u: goto label_18eac4;
        case 0x18eac8u: goto label_18eac8;
        case 0x18eaccu: goto label_18eacc;
        case 0x18ead0u: goto label_18ead0;
        case 0x18ead4u: goto label_18ead4;
        case 0x18ead8u: goto label_18ead8;
        case 0x18eadcu: goto label_18eadc;
        case 0x18eae0u: goto label_18eae0;
        case 0x18eae4u: goto label_18eae4;
        case 0x18eae8u: goto label_18eae8;
        case 0x18eaecu: goto label_18eaec;
        case 0x18eaf0u: goto label_18eaf0;
        case 0x18eaf4u: goto label_18eaf4;
        case 0x18eaf8u: goto label_18eaf8;
        case 0x18eafcu: goto label_18eafc;
        case 0x18eb00u: goto label_18eb00;
        case 0x18eb04u: goto label_18eb04;
        case 0x18eb08u: goto label_18eb08;
        case 0x18eb0cu: goto label_18eb0c;
        case 0x18eb10u: goto label_18eb10;
        case 0x18eb14u: goto label_18eb14;
        case 0x18eb18u: goto label_18eb18;
        case 0x18eb1cu: goto label_18eb1c;
        case 0x18eb20u: goto label_18eb20;
        case 0x18eb24u: goto label_18eb24;
        case 0x18eb28u: goto label_18eb28;
        case 0x18eb2cu: goto label_18eb2c;
        case 0x18eb30u: goto label_18eb30;
        case 0x18eb34u: goto label_18eb34;
        case 0x18eb38u: goto label_18eb38;
        case 0x18eb3cu: goto label_18eb3c;
        case 0x18eb40u: goto label_18eb40;
        case 0x18eb44u: goto label_18eb44;
        case 0x18eb48u: goto label_18eb48;
        case 0x18eb4cu: goto label_18eb4c;
        case 0x18eb50u: goto label_18eb50;
        case 0x18eb54u: goto label_18eb54;
        case 0x18eb58u: goto label_18eb58;
        case 0x18eb5cu: goto label_18eb5c;
        case 0x18eb60u: goto label_18eb60;
        case 0x18eb64u: goto label_18eb64;
        case 0x18eb68u: goto label_18eb68;
        case 0x18eb6cu: goto label_18eb6c;
        case 0x18eb70u: goto label_18eb70;
        case 0x18eb74u: goto label_18eb74;
        case 0x18eb78u: goto label_18eb78;
        case 0x18eb7cu: goto label_18eb7c;
        case 0x18eb80u: goto label_18eb80;
        case 0x18eb84u: goto label_18eb84;
        case 0x18eb88u: goto label_18eb88;
        case 0x18eb8cu: goto label_18eb8c;
        case 0x18eb90u: goto label_18eb90;
        case 0x18eb94u: goto label_18eb94;
        case 0x18eb98u: goto label_18eb98;
        case 0x18eb9cu: goto label_18eb9c;
        case 0x18eba0u: goto label_18eba0;
        case 0x18eba4u: goto label_18eba4;
        case 0x18eba8u: goto label_18eba8;
        case 0x18ebacu: goto label_18ebac;
        case 0x18ebb0u: goto label_18ebb0;
        case 0x18ebb4u: goto label_18ebb4;
        case 0x18ebb8u: goto label_18ebb8;
        case 0x18ebbcu: goto label_18ebbc;
        case 0x18ebc0u: goto label_18ebc0;
        case 0x18ebc4u: goto label_18ebc4;
        case 0x18ebc8u: goto label_18ebc8;
        case 0x18ebccu: goto label_18ebcc;
        default: break;
    }

    ctx->pc = 0x18e8a0u;

label_18e8a0:
    // 0x18e8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18e8a4:
    // 0x18e8a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_18e8a8:
    // 0x18e8a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18e8ac:
    // 0x18e8ac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x18e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18e8b0:
    // 0x18e8b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x18e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18e8b4:
    // 0x18e8b4: 0x3e00008  jr          $ra
label_18e8b8:
    if (ctx->pc == 0x18E8B8u) {
        ctx->pc = 0x18E8BCu;
        goto label_18e8bc;
    }
    ctx->pc = 0x18E8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E8BCu;
label_18e8bc:
    // 0x18e8bc: 0x0  nop
    ctx->pc = 0x18e8bcu;
    // NOP
label_18e8c0:
    // 0x18e8c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18e8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18e8c4:
    // 0x18e8c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18e8c8:
    // 0x18e8c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18e8cc:
    // 0x18e8cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18e8d0:
    // 0x18e8d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18e8d4:
    // 0x18e8d4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x18e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_18e8d8:
    // 0x18e8d8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x18e8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_18e8dc:
    // 0x18e8dc: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x18e8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
label_18e8e0:
    // 0x18e8e0: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x18e8e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
label_18e8e4:
    // 0x18e8e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18e8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18e8e8:
    // 0x18e8e8: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
label_18e8ec:
    if (ctx->pc == 0x18E8ECu) {
        ctx->pc = 0x18E8F0u;
        goto label_18e8f0;
    }
    ctx->pc = 0x18E8E8u;
    {
        const bool branch_taken_0x18e8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8e8) {
            ctx->pc = 0x18EBACu;
            goto label_18ebac;
        }
    }
    ctx->pc = 0x18E8F0u;
label_18e8f0:
    // 0x18e8f0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x18e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_18e8f4:
    // 0x18e8f4: 0x2463ff97  addiu       $v1, $v1, -0x69
    ctx->pc = 0x18e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967191));
label_18e8f8:
    // 0x18e8f8: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x18e8f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18e8fc:
    // 0x18e8fc: 0x102000ab  beqz        $at, . + 4 + (0xAB << 2)
label_18e900:
    if (ctx->pc == 0x18E900u) {
        ctx->pc = 0x18E904u;
        goto label_18e904;
    }
    ctx->pc = 0x18E8FCu;
    {
        const bool branch_taken_0x18e8fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8fc) {
            ctx->pc = 0x18EBACu;
            goto label_18ebac;
        }
    }
    ctx->pc = 0x18E904u;
label_18e904:
    // 0x18e904: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x18e904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_18e908:
    // 0x18e908: 0x24848670  addiu       $a0, $a0, -0x7990
    ctx->pc = 0x18e908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936176));
label_18e90c:
    // 0x18e90c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e910:
    // 0x18e910: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18e910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e914:
    // 0x18e914: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18e918:
    // 0x18e918: 0x600008  jr          $v1
label_18e91c:
    if (ctx->pc == 0x18E91Cu) {
        ctx->pc = 0x18E920u;
        goto label_18e920;
    }
    ctx->pc = 0x18E918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E920u: goto label_18e920;
            case 0x18E9C0u: goto label_18e9c0;
            case 0x18EA60u: goto label_18ea60;
            case 0x18EADCu: goto label_18eadc;
            case 0x18EB70u: goto label_18eb70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E918u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18E920u;
label_18e920:
    // 0x18e920: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e924:
    // 0x18e924: 0x8c52006c  lw          $s2, 0x6C($v0)
    ctx->pc = 0x18e924u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18e928:
    // 0x18e928: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e92c:
    // 0x18e92c: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18e930:
    // 0x18e930: 0xc0637f0  jal         func_18DFC0
label_18e934:
    if (ctx->pc == 0x18E934u) {
        ctx->pc = 0x18E938u;
        goto label_18e938;
    }
    ctx->pc = 0x18E930u;
    SET_GPR_U32(ctx, 31, 0x18E938u);
    ctx->pc = 0x18DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DFC0u, 0x18E930u, 0x18E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E938u;
label_18e938:
    // 0x18e938: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x18e938u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18e93c:
    // 0x18e93c: 0x1020009b  beqz        $at, . + 4 + (0x9B << 2)
label_18e940:
    if (ctx->pc == 0x18E940u) {
        ctx->pc = 0x18E944u;
        goto label_18e944;
    }
    ctx->pc = 0x18E93Cu;
    {
        const bool branch_taken_0x18e93c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e93c) {
            ctx->pc = 0x18EBACu;
            goto label_18ebac;
        }
    }
    ctx->pc = 0x18E944u;
label_18e944:
    // 0x18e944: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e948:
    // 0x18e948: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e94c:
    // 0x18e94c: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x18e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18e950:
    // 0x18e950: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x18e950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_18e954:
    // 0x18e954: 0xc0637c4  jal         func_18DF10
label_18e958:
    if (ctx->pc == 0x18E958u) {
        ctx->pc = 0x18E95Cu;
        goto label_18e95c;
    }
    ctx->pc = 0x18E954u;
    SET_GPR_U32(ctx, 31, 0x18E95Cu);
    ctx->pc = 0x18DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF10u, 0x18E954u, 0x18E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E95Cu;
label_18e95c:
    // 0x18e95c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e960:
    // 0x18e960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18e960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e964:
    // 0x18e964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e968:
    // 0x18e968: 0xc063c24  jal         func_18F090
label_18e96c:
    if (ctx->pc == 0x18E96Cu) {
        ctx->pc = 0x18E970u;
        goto label_18e970;
    }
    ctx->pc = 0x18E968u;
    SET_GPR_U32(ctx, 31, 0x18E970u);
    ctx->pc = 0x18F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F090u, 0x18E968u, 0x18E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E970u;
label_18e970:
    // 0x18e970: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e974:
    // 0x18e974: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e978:
    // 0x18e978: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18e97c:
    // 0x18e97c: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x18e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
label_18e980:
    // 0x18e980: 0xc0637e0  jal         func_18DF80
label_18e984:
    if (ctx->pc == 0x18E984u) {
        ctx->pc = 0x18E988u;
        goto label_18e988;
    }
    ctx->pc = 0x18E980u;
    SET_GPR_U32(ctx, 31, 0x18E988u);
    ctx->pc = 0x18DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF80u, 0x18E980u, 0x18E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E988u;
label_18e988:
    // 0x18e988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18e988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e98c:
    // 0x18e98c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e990:
    // 0x18e990: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e994:
    // 0x18e994: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x18e994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18e998:
    // 0x18e998: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x18e998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_18e99c:
    // 0x18e99c: 0xc0637c4  jal         func_18DF10
label_18e9a0:
    if (ctx->pc == 0x18E9A0u) {
        ctx->pc = 0x18E9A4u;
        goto label_18e9a4;
    }
    ctx->pc = 0x18E99Cu;
    SET_GPR_U32(ctx, 31, 0x18E9A4u);
    ctx->pc = 0x18DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF10u, 0x18E99Cu, 0x18E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9A4u;
label_18e9a4:
    // 0x18e9a4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e9a8:
    // 0x18e9a8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x18e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18e9ac:
    // 0x18e9ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18e9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e9b0:
    // 0x18e9b0: 0xc063b08  jal         func_18EC20
label_18e9b4:
    if (ctx->pc == 0x18E9B4u) {
        ctx->pc = 0x18E9B8u;
        goto label_18e9b8;
    }
    ctx->pc = 0x18E9B0u;
    SET_GPR_U32(ctx, 31, 0x18E9B8u);
    ctx->pc = 0x18EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC20u, 0x18E9B0u, 0x18E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9B8u;
label_18e9b8:
    // 0x18e9b8: 0x1000007c  b           . + 4 + (0x7C << 2)
label_18e9bc:
    if (ctx->pc == 0x18E9BCu) {
        ctx->pc = 0x18E9C0u;
        goto label_18e9c0;
    }
    ctx->pc = 0x18E9B8u;
    {
        const bool branch_taken_0x18e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e9b8) {
            ctx->pc = 0x18EBACu;
            goto label_18ebac;
        }
    }
    ctx->pc = 0x18E9C0u;
label_18e9c0:
    // 0x18e9c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e9c4:
    // 0x18e9c4: 0x8c52006c  lw          $s2, 0x6C($v0)
    ctx->pc = 0x18e9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18e9c8:
    // 0x18e9c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e9cc:
    // 0x18e9cc: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18e9d0:
    // 0x18e9d0: 0xc0637f0  jal         func_18DFC0
label_18e9d4:
    if (ctx->pc == 0x18E9D4u) {
        ctx->pc = 0x18E9D8u;
        goto label_18e9d8;
    }
    ctx->pc = 0x18E9D0u;
    SET_GPR_U32(ctx, 31, 0x18E9D8u);
    ctx->pc = 0x18DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DFC0u, 0x18E9D0u, 0x18E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9D8u;
label_18e9d8:
    // 0x18e9d8: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x18e9d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18e9dc:
    // 0x18e9dc: 0x10200073  beqz        $at, . + 4 + (0x73 << 2)
label_18e9e0:
    if (ctx->pc == 0x18E9E0u) {
        ctx->pc = 0x18E9E4u;
        goto label_18e9e4;
    }
    ctx->pc = 0x18E9DCu;
    {
        const bool branch_taken_0x18e9dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e9dc) {
            ctx->pc = 0x18EBACu;
            goto label_18ebac;
        }
    }
    ctx->pc = 0x18E9E4u;
label_18e9e4:
    // 0x18e9e4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e9e8:
    // 0x18e9e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18e9ec:
    // 0x18e9ec: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x18e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18e9f0:
    // 0x18e9f0: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x18e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_18e9f4:
    // 0x18e9f4: 0xc0637c4  jal         func_18DF10
label_18e9f8:
    if (ctx->pc == 0x18E9F8u) {
        ctx->pc = 0x18E9FCu;
        goto label_18e9fc;
    }
    ctx->pc = 0x18E9F4u;
    SET_GPR_U32(ctx, 31, 0x18E9FCu);
    ctx->pc = 0x18DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF10u, 0x18E9F4u, 0x18E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9FCu;
label_18e9fc:
    // 0x18e9fc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18ea00:
    // 0x18ea00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ea00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ea04:
    // 0x18ea04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ea04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ea08:
    // 0x18ea08: 0xc063c24  jal         func_18F090
label_18ea0c:
    if (ctx->pc == 0x18EA0Cu) {
        ctx->pc = 0x18EA10u;
        goto label_18ea10;
    }
    ctx->pc = 0x18EA08u;
    SET_GPR_U32(ctx, 31, 0x18EA10u);
    ctx->pc = 0x18F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F090u, 0x18EA08u, 0x18EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA10u;
label_18ea10:
    // 0x18ea10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18ea14:
    // 0x18ea14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18ea18:
    // 0x18ea18: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x18ea18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18ea1c:
    // 0x18ea1c: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x18ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
label_18ea20:
    // 0x18ea20: 0xc0637e0  jal         func_18DF80
label_18ea24:
    if (ctx->pc == 0x18EA24u) {
        ctx->pc = 0x18EA28u;
        goto label_18ea28;
    }
    ctx->pc = 0x18EA20u;
    SET_GPR_U32(ctx, 31, 0x18EA28u);
    ctx->pc = 0x18DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF80u, 0x18EA20u, 0x18EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA28u;
label_18ea28:
    // 0x18ea28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18ea28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ea2c:
    // 0x18ea2c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18ea30:
    // 0x18ea30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18ea34:
    // 0x18ea34: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x18ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18ea38:
    // 0x18ea38: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x18ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_18ea3c:
    // 0x18ea3c: 0xc0637c4  jal         func_18DF10
label_18ea40:
    if (ctx->pc == 0x18EA40u) {
        ctx->pc = 0x18EA44u;
        goto label_18ea44;
    }
    ctx->pc = 0x18EA3Cu;
    SET_GPR_U32(ctx, 31, 0x18EA44u);
    ctx->pc = 0x18DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF10u, 0x18EA3Cu, 0x18EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA44u;
label_18ea44:
    // 0x18ea44: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18ea48:
    // 0x18ea48: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x18ea48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18ea4c:
    // 0x18ea4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18ea4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ea50:
    // 0x18ea50: 0xc063b08  jal         func_18EC20
label_18ea54:
    if (ctx->pc == 0x18EA54u) {
        ctx->pc = 0x18EA58u;
        goto label_18ea58;
    }
    ctx->pc = 0x18EA50u;
    SET_GPR_U32(ctx, 31, 0x18EA58u);
    ctx->pc = 0x18EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC20u, 0x18EA50u, 0x18EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA58u;
label_18ea58:
    // 0x18ea58: 0x10000054  b           . + 4 + (0x54 << 2)
label_18ea5c:
    if (ctx->pc == 0x18EA5Cu) {
        ctx->pc = 0x18EA60u;
        goto label_18ea60;
    }
    ctx->pc = 0x18EA58u;
    {
        const bool branch_taken_0x18ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea58) {
            ctx->pc = 0x18EBACu;
            goto label_18ebac;
        }
    }
    ctx->pc = 0x18EA60u;
label_18ea60:
    // 0x18ea60: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18ea64:
    // 0x18ea64: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x18ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_18ea68:
    // 0x18ea68: 0x18600050  blez        $v1, . + 4 + (0x50 << 2)
label_18ea6c:
    if (ctx->pc == 0x18EA6Cu) {
        ctx->pc = 0x18EA70u;
        goto label_18ea70;
    }
    ctx->pc = 0x18EA68u;
    {
        const bool branch_taken_0x18ea68 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x18ea68) {
            ctx->pc = 0x18EBACu;
            goto label_18ebac;
        }
    }
    ctx->pc = 0x18EA70u;
label_18ea70:
    // 0x18ea70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18ea74:
    // 0x18ea74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18ea74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18ea78:
    // 0x18ea78: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x18ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_18ea7c:
    // 0x18ea7c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18ea80:
    // 0x18ea80: 0x24a559a0  addiu       $a1, $a1, 0x59A0
    ctx->pc = 0x18ea80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
label_18ea84:
    // 0x18ea84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ea84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ea88:
    // 0x18ea88: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x18ea88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18ea8c:
    // 0x18ea8c: 0xc08f558  jal         func_23D560
label_18ea90:
    if (ctx->pc == 0x18EA90u) {
        ctx->pc = 0x18EA94u;
        goto label_18ea94;
    }
    ctx->pc = 0x18EA8Cu;
    SET_GPR_U32(ctx, 31, 0x18EA94u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x18EA8Cu, 0x18EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA94u;
label_18ea94:
    // 0x18ea94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18ea98:
    // 0x18ea98: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18ea9c:
    // 0x18ea9c: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x18ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18eaa0:
    // 0x18eaa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18eaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18eaa4:
    // 0x18eaa4: 0xc063be0  jal         func_18EF80
label_18eaa8:
    if (ctx->pc == 0x18EAA8u) {
        ctx->pc = 0x18EAACu;
        goto label_18eaac;
    }
    ctx->pc = 0x18EAA4u;
    SET_GPR_U32(ctx, 31, 0x18EAACu);
    ctx->pc = 0x18EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EF80u, 0x18EAA4u, 0x18EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAACu;
label_18eaac:
    // 0x18eaac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18eab0:
    // 0x18eab0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x18eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_18eab4:
    // 0x18eab4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18eab8:
    // 0x18eab8: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x18eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
label_18eabc:
    // 0x18eabc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18eac0:
    // 0x18eac0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18eac4:
    // 0x18eac4: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x18eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18eac8:
    // 0x18eac8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18eac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18eacc:
    // 0x18eacc: 0xc063be0  jal         func_18EF80
label_18ead0:
    if (ctx->pc == 0x18EAD0u) {
        ctx->pc = 0x18EAD4u;
        goto label_18ead4;
    }
    ctx->pc = 0x18EACCu;
    SET_GPR_U32(ctx, 31, 0x18EAD4u);
    ctx->pc = 0x18EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EF80u, 0x18EACCu, 0x18EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAD4u;
label_18ead4:
    // 0x18ead4: 0x10000035  b           . + 4 + (0x35 << 2)
label_18ead8:
    if (ctx->pc == 0x18EAD8u) {
        ctx->pc = 0x18EADCu;
        goto label_18eadc;
    }
    ctx->pc = 0x18EAD4u;
    {
        const bool branch_taken_0x18ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ead4) {
            ctx->pc = 0x18EBACu;
            goto label_18ebac;
        }
    }
    ctx->pc = 0x18EADCu;
label_18eadc:
    // 0x18eadc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18eae0:
    // 0x18eae0: 0x8c52006c  lw          $s2, 0x6C($v0)
    ctx->pc = 0x18eae0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18eae4:
    // 0x18eae4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18eae8:
    // 0x18eae8: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18eaec:
    // 0x18eaec: 0xc0637f0  jal         func_18DFC0
label_18eaf0:
    if (ctx->pc == 0x18EAF0u) {
        ctx->pc = 0x18EAF4u;
        goto label_18eaf4;
    }
    ctx->pc = 0x18EAECu;
    SET_GPR_U32(ctx, 31, 0x18EAF4u);
    ctx->pc = 0x18DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DFC0u, 0x18EAECu, 0x18EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAF4u;
label_18eaf4:
    // 0x18eaf4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x18eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18eaf8:
    // 0x18eaf8: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x18eaf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18eafc:
    // 0x18eafc: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_18eb00:
    if (ctx->pc == 0x18EB00u) {
        ctx->pc = 0x18EB04u;
        goto label_18eb04;
    }
    ctx->pc = 0x18EAFCu;
    {
        const bool branch_taken_0x18eafc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eafc) {
            ctx->pc = 0x18EBACu;
            goto label_18ebac;
        }
    }
    ctx->pc = 0x18EB04u;
label_18eb04:
    // 0x18eb04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18eb08:
    // 0x18eb08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18eb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18eb0c:
    // 0x18eb0c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x18eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_18eb10:
    // 0x18eb10: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18eb14:
    // 0x18eb14: 0x24a559a0  addiu       $a1, $a1, 0x59A0
    ctx->pc = 0x18eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
label_18eb18:
    // 0x18eb18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18eb18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18eb1c:
    // 0x18eb1c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x18eb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18eb20:
    // 0x18eb20: 0xc08f558  jal         func_23D560
label_18eb24:
    if (ctx->pc == 0x18EB24u) {
        ctx->pc = 0x18EB28u;
        goto label_18eb28;
    }
    ctx->pc = 0x18EB20u;
    SET_GPR_U32(ctx, 31, 0x18EB28u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x18EB20u, 0x18EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB28u;
label_18eb28:
    // 0x18eb28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18eb2c:
    // 0x18eb2c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18eb30:
    // 0x18eb30: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x18eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18eb34:
    // 0x18eb34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18eb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18eb38:
    // 0x18eb38: 0xc063be0  jal         func_18EF80
label_18eb3c:
    if (ctx->pc == 0x18EB3Cu) {
        ctx->pc = 0x18EB40u;
        goto label_18eb40;
    }
    ctx->pc = 0x18EB38u;
    SET_GPR_U32(ctx, 31, 0x18EB40u);
    ctx->pc = 0x18EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EF80u, 0x18EB38u, 0x18EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB40u;
label_18eb40:
    // 0x18eb40: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18eb44:
    // 0x18eb44: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x18eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_18eb48:
    // 0x18eb48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18eb4c:
    // 0x18eb4c: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x18eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
label_18eb50:
    // 0x18eb50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18eb54:
    // 0x18eb54: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18eb58:
    // 0x18eb58: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x18eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18eb5c:
    // 0x18eb5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18eb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18eb60:
    // 0x18eb60: 0xc063be0  jal         func_18EF80
label_18eb64:
    if (ctx->pc == 0x18EB64u) {
        ctx->pc = 0x18EB68u;
        goto label_18eb68;
    }
    ctx->pc = 0x18EB60u;
    SET_GPR_U32(ctx, 31, 0x18EB68u);
    ctx->pc = 0x18EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EF80u, 0x18EB60u, 0x18EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB68u;
label_18eb68:
    // 0x18eb68: 0x10000010  b           . + 4 + (0x10 << 2)
label_18eb6c:
    if (ctx->pc == 0x18EB6Cu) {
        ctx->pc = 0x18EB70u;
        goto label_18eb70;
    }
    ctx->pc = 0x18EB68u;
    {
        const bool branch_taken_0x18eb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb68) {
            ctx->pc = 0x18EBACu;
            goto label_18ebac;
        }
    }
    ctx->pc = 0x18EB70u;
label_18eb70:
    // 0x18eb70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18eb74:
    // 0x18eb74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18eb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18eb78:
    // 0x18eb78: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x18eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_18eb7c:
    // 0x18eb7c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18eb80:
    // 0x18eb80: 0x24a559c0  addiu       $a1, $a1, 0x59C0
    ctx->pc = 0x18eb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22976));
label_18eb84:
    // 0x18eb84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18eb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18eb88:
    // 0x18eb88: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x18eb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18eb8c:
    // 0x18eb8c: 0xc08f558  jal         func_23D560
label_18eb90:
    if (ctx->pc == 0x18EB90u) {
        ctx->pc = 0x18EB94u;
        goto label_18eb94;
    }
    ctx->pc = 0x18EB8Cu;
    SET_GPR_U32(ctx, 31, 0x18EB94u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x18EB8Cu, 0x18EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB94u;
label_18eb94:
    // 0x18eb94: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18eb98:
    // 0x18eb98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18eb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18eb9c:
    // 0x18eb9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18eb9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18eba0:
    // 0x18eba0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18eba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18eba4:
    // 0x18eba4: 0x320f809  jalr        $t9
label_18eba8:
    if (ctx->pc == 0x18EBA8u) {
        ctx->pc = 0x18EBACu;
        goto label_18ebac;
    }
    ctx->pc = 0x18EBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18EBACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EBA4u, 0x18EBACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EBACu;
label_18ebac:
    // 0x18ebac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18ebacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18ebb0:
    // 0x18ebb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ebb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18ebb4:
    // 0x18ebb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ebb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18ebb8:
    // 0x18ebb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ebb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18ebbc:
    // 0x18ebbc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18ebbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18ebc0:
    // 0x18ebc0: 0x3e00008  jr          $ra
label_18ebc4:
    if (ctx->pc == 0x18EBC4u) {
        ctx->pc = 0x18EBC8u;
        goto label_18ebc8;
    }
    ctx->pc = 0x18EBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EBC8u;
label_18ebc8:
    // 0x18ebc8: 0x0  nop
    ctx->pc = 0x18ebc8u;
    // NOP
label_18ebcc:
    // 0x18ebcc: 0x0  nop
    ctx->pc = 0x18ebccu;
    // NOP
    ctx->pc = 0x18ebd0u;
}
