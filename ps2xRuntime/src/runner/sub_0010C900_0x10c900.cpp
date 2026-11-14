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

// Function: sub_0010C900
// Address: 0x10c900 - 0x10caf0
void sub_0010C900_0x10c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C900_0x10c900");
#endif

    switch (ctx->pc) {
        case 0x10c900u: goto label_10c900;
        case 0x10c904u: goto label_10c904;
        case 0x10c908u: goto label_10c908;
        case 0x10c90cu: goto label_10c90c;
        case 0x10c910u: goto label_10c910;
        case 0x10c914u: goto label_10c914;
        case 0x10c918u: goto label_10c918;
        case 0x10c91cu: goto label_10c91c;
        case 0x10c920u: goto label_10c920;
        case 0x10c924u: goto label_10c924;
        case 0x10c928u: goto label_10c928;
        case 0x10c92cu: goto label_10c92c;
        case 0x10c930u: goto label_10c930;
        case 0x10c934u: goto label_10c934;
        case 0x10c938u: goto label_10c938;
        case 0x10c93cu: goto label_10c93c;
        case 0x10c940u: goto label_10c940;
        case 0x10c944u: goto label_10c944;
        case 0x10c948u: goto label_10c948;
        case 0x10c94cu: goto label_10c94c;
        case 0x10c950u: goto label_10c950;
        case 0x10c954u: goto label_10c954;
        case 0x10c958u: goto label_10c958;
        case 0x10c95cu: goto label_10c95c;
        case 0x10c960u: goto label_10c960;
        case 0x10c964u: goto label_10c964;
        case 0x10c968u: goto label_10c968;
        case 0x10c96cu: goto label_10c96c;
        case 0x10c970u: goto label_10c970;
        case 0x10c974u: goto label_10c974;
        case 0x10c978u: goto label_10c978;
        case 0x10c97cu: goto label_10c97c;
        case 0x10c980u: goto label_10c980;
        case 0x10c984u: goto label_10c984;
        case 0x10c988u: goto label_10c988;
        case 0x10c98cu: goto label_10c98c;
        case 0x10c990u: goto label_10c990;
        case 0x10c994u: goto label_10c994;
        case 0x10c998u: goto label_10c998;
        case 0x10c99cu: goto label_10c99c;
        case 0x10c9a0u: goto label_10c9a0;
        case 0x10c9a4u: goto label_10c9a4;
        case 0x10c9a8u: goto label_10c9a8;
        case 0x10c9acu: goto label_10c9ac;
        case 0x10c9b0u: goto label_10c9b0;
        case 0x10c9b4u: goto label_10c9b4;
        case 0x10c9b8u: goto label_10c9b8;
        case 0x10c9bcu: goto label_10c9bc;
        case 0x10c9c0u: goto label_10c9c0;
        case 0x10c9c4u: goto label_10c9c4;
        case 0x10c9c8u: goto label_10c9c8;
        case 0x10c9ccu: goto label_10c9cc;
        case 0x10c9d0u: goto label_10c9d0;
        case 0x10c9d4u: goto label_10c9d4;
        case 0x10c9d8u: goto label_10c9d8;
        case 0x10c9dcu: goto label_10c9dc;
        case 0x10c9e0u: goto label_10c9e0;
        case 0x10c9e4u: goto label_10c9e4;
        case 0x10c9e8u: goto label_10c9e8;
        case 0x10c9ecu: goto label_10c9ec;
        case 0x10c9f0u: goto label_10c9f0;
        case 0x10c9f4u: goto label_10c9f4;
        case 0x10c9f8u: goto label_10c9f8;
        case 0x10c9fcu: goto label_10c9fc;
        case 0x10ca00u: goto label_10ca00;
        case 0x10ca04u: goto label_10ca04;
        case 0x10ca08u: goto label_10ca08;
        case 0x10ca0cu: goto label_10ca0c;
        case 0x10ca10u: goto label_10ca10;
        case 0x10ca14u: goto label_10ca14;
        case 0x10ca18u: goto label_10ca18;
        case 0x10ca1cu: goto label_10ca1c;
        case 0x10ca20u: goto label_10ca20;
        case 0x10ca24u: goto label_10ca24;
        case 0x10ca28u: goto label_10ca28;
        case 0x10ca2cu: goto label_10ca2c;
        case 0x10ca30u: goto label_10ca30;
        case 0x10ca34u: goto label_10ca34;
        case 0x10ca38u: goto label_10ca38;
        case 0x10ca3cu: goto label_10ca3c;
        case 0x10ca40u: goto label_10ca40;
        case 0x10ca44u: goto label_10ca44;
        case 0x10ca48u: goto label_10ca48;
        case 0x10ca4cu: goto label_10ca4c;
        case 0x10ca50u: goto label_10ca50;
        case 0x10ca54u: goto label_10ca54;
        case 0x10ca58u: goto label_10ca58;
        case 0x10ca5cu: goto label_10ca5c;
        case 0x10ca60u: goto label_10ca60;
        case 0x10ca64u: goto label_10ca64;
        case 0x10ca68u: goto label_10ca68;
        case 0x10ca6cu: goto label_10ca6c;
        case 0x10ca70u: goto label_10ca70;
        case 0x10ca74u: goto label_10ca74;
        case 0x10ca78u: goto label_10ca78;
        case 0x10ca7cu: goto label_10ca7c;
        case 0x10ca80u: goto label_10ca80;
        case 0x10ca84u: goto label_10ca84;
        case 0x10ca88u: goto label_10ca88;
        case 0x10ca8cu: goto label_10ca8c;
        case 0x10ca90u: goto label_10ca90;
        case 0x10ca94u: goto label_10ca94;
        case 0x10ca98u: goto label_10ca98;
        case 0x10ca9cu: goto label_10ca9c;
        case 0x10caa0u: goto label_10caa0;
        case 0x10caa4u: goto label_10caa4;
        case 0x10caa8u: goto label_10caa8;
        case 0x10caacu: goto label_10caac;
        case 0x10cab0u: goto label_10cab0;
        case 0x10cab4u: goto label_10cab4;
        case 0x10cab8u: goto label_10cab8;
        case 0x10cabcu: goto label_10cabc;
        case 0x10cac0u: goto label_10cac0;
        case 0x10cac4u: goto label_10cac4;
        case 0x10cac8u: goto label_10cac8;
        case 0x10caccu: goto label_10cacc;
        case 0x10cad0u: goto label_10cad0;
        case 0x10cad4u: goto label_10cad4;
        case 0x10cad8u: goto label_10cad8;
        case 0x10cadcu: goto label_10cadc;
        case 0x10cae0u: goto label_10cae0;
        case 0x10cae4u: goto label_10cae4;
        case 0x10cae8u: goto label_10cae8;
        case 0x10caecu: goto label_10caec;
        default: break;
    }

    ctx->pc = 0x10c900u;

label_10c900:
    // 0x10c900: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_10c904:
    // 0x10c904: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10c904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_10c908:
    // 0x10c908: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10c908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10c90c:
    // 0x10c90c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10c90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10c910:
    // 0x10c910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10c910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10c914:
    // 0x10c914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10c914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10c918:
    // 0x10c918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10c91c:
    // 0x10c91c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x10c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_10c920:
    // 0x10c920: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x10c920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_10c924:
    // 0x10c924: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x10c924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
label_10c928:
    // 0x10c928: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x10c928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_10c92c:
    // 0x10c92c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x10c92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_10c930:
    // 0x10c930: 0xc0431ac  jal         func_10C6B0
label_10c934:
    if (ctx->pc == 0x10C934u) {
        ctx->pc = 0x10C938u;
        goto label_10c938;
    }
    ctx->pc = 0x10C930u;
    SET_GPR_U32(ctx, 31, 0x10C938u);
    ctx->pc = 0x10C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C6B0u, 0x10C930u, 0x10C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C938u;
label_10c938:
    // 0x10c938: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10c938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c93c:
    // 0x10c93c: 0x14110004  bne         $zero, $s1, . + 4 + (0x4 << 2)
label_10c940:
    if (ctx->pc == 0x10C940u) {
        ctx->pc = 0x10C944u;
        goto label_10c944;
    }
    ctx->pc = 0x10C93Cu;
    {
        const bool branch_taken_0x10c93c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 17));
        if (branch_taken_0x10c93c) {
            ctx->pc = 0x10C950u;
            goto label_10c950;
        }
    }
    ctx->pc = 0x10C944u;
label_10c944:
    // 0x10c944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10c944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c948:
    // 0x10c948: 0x1000005e  b           . + 4 + (0x5E << 2)
label_10c94c:
    if (ctx->pc == 0x10C94Cu) {
        ctx->pc = 0x10C950u;
        goto label_10c950;
    }
    ctx->pc = 0x10C948u;
    {
        const bool branch_taken_0x10c948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c948) {
            ctx->pc = 0x10CAC4u;
            goto label_10cac4;
        }
    }
    ctx->pc = 0x10C950u;
label_10c950:
    // 0x10c950: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x10c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_10c954:
    // 0x10c954: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10c954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10c958:
    // 0x10c958: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x10c958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_10c95c:
    // 0x10c95c: 0xc044da4  jal         func_113690
label_10c960:
    if (ctx->pc == 0x10C960u) {
        ctx->pc = 0x10C964u;
        goto label_10c964;
    }
    ctx->pc = 0x10C95Cu;
    SET_GPR_U32(ctx, 31, 0x10C964u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x10C95Cu, 0x10C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C964u;
label_10c964:
    // 0x10c964: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10c964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c968:
    // 0x10c968: 0x14140004  bne         $zero, $s4, . + 4 + (0x4 << 2)
label_10c96c:
    if (ctx->pc == 0x10C96Cu) {
        ctx->pc = 0x10C970u;
        goto label_10c970;
    }
    ctx->pc = 0x10C968u;
    {
        const bool branch_taken_0x10c968 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 20));
        if (branch_taken_0x10c968) {
            ctx->pc = 0x10C97Cu;
            goto label_10c97c;
        }
    }
    ctx->pc = 0x10C970u;
label_10c970:
    // 0x10c970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10c970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c974:
    // 0x10c974: 0x10000053  b           . + 4 + (0x53 << 2)
label_10c978:
    if (ctx->pc == 0x10C978u) {
        ctx->pc = 0x10C97Cu;
        goto label_10c97c;
    }
    ctx->pc = 0x10C974u;
    {
        const bool branch_taken_0x10c974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c974) {
            ctx->pc = 0x10CAC4u;
            goto label_10cac4;
        }
    }
    ctx->pc = 0x10C97Cu;
label_10c97c:
    // 0x10c97c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c980:
    // 0x10c980: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10c980u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c984:
    // 0x10c984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10c984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10c988:
    // 0x10c988: 0xc0457e8  jal         func_115FA0
label_10c98c:
    if (ctx->pc == 0x10C98Cu) {
        ctx->pc = 0x10C990u;
        goto label_10c990;
    }
    ctx->pc = 0x10C988u;
    SET_GPR_U32(ctx, 31, 0x10C990u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x10C988u, 0x10C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C990u;
label_10c990:
    // 0x10c990: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x10c990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10c994:
    // 0x10c994: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x10c994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_10c998:
    // 0x10c998: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x10c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10c99c:
    // 0x10c99c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x10c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10c9a0:
    // 0x10c9a0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x10c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_10c9a4:
    // 0x10c9a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10c9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10c9a8:
    // 0x10c9a8: 0xc0432c4  jal         func_10CB10
label_10c9ac:
    if (ctx->pc == 0x10C9ACu) {
        ctx->pc = 0x10C9B0u;
        goto label_10c9b0;
    }
    ctx->pc = 0x10C9A8u;
    SET_GPR_U32(ctx, 31, 0x10C9B0u);
    ctx->pc = 0x10CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB10u, 0x10C9A8u, 0x10C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9B0u;
label_10c9b0:
    // 0x10c9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c9b4:
    // 0x10c9b4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x10c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10c9b8:
    // 0x10c9b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c9bc:
    // 0x10c9bc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x10c9bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_10c9c0:
    // 0x10c9c0: 0x320f809  jalr        $t9
label_10c9c4:
    if (ctx->pc == 0x10C9C4u) {
        ctx->pc = 0x10C9C8u;
        goto label_10c9c8;
    }
    ctx->pc = 0x10C9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C9C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C9C0u, 0x10C9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C9C8u;
label_10c9c8:
    // 0x10c9c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10c9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c9cc:
    // 0x10c9cc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10c9d0:
    // 0x10c9d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10c9d4:
    // 0x10c9d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10c9d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10c9d8:
    // 0x10c9d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c9dc:
    // 0x10c9dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c9e0:
    // 0x10c9e0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10c9e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10c9e4:
    // 0x10c9e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c9e8:
    // 0x10c9e8: 0xc0856d4  jal         func_215B50
label_10c9ec:
    if (ctx->pc == 0x10C9ECu) {
        ctx->pc = 0x10C9F0u;
        goto label_10c9f0;
    }
    ctx->pc = 0x10C9E8u;
    SET_GPR_U32(ctx, 31, 0x10C9F0u);
    ctx->pc = 0x215B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B50u, 0x10C9E8u, 0x10C9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9F0u;
label_10c9f0:
    // 0x10c9f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10c9f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c9f4:
    // 0x10c9f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10c9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c9f8:
    // 0x10c9f8: 0xc0432bc  jal         func_10CAF0
label_10c9fc:
    if (ctx->pc == 0x10C9FCu) {
        ctx->pc = 0x10CA00u;
        goto label_10ca00;
    }
    ctx->pc = 0x10C9F8u;
    SET_GPR_U32(ctx, 31, 0x10CA00u);
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x10C9F8u, 0x10CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA00u;
label_10ca00:
    // 0x10ca00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ca00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ca04:
    // 0x10ca04: 0x1000000f  b           . + 4 + (0xF << 2)
label_10ca08:
    if (ctx->pc == 0x10CA08u) {
        ctx->pc = 0x10CA0Cu;
        goto label_10ca0c;
    }
    ctx->pc = 0x10CA04u;
    {
        const bool branch_taken_0x10ca04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ca04) {
            ctx->pc = 0x10CA44u;
            goto label_10ca44;
        }
    }
    ctx->pc = 0x10CA0Cu;
label_10ca0c:
    // 0x10ca0c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x10ca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10ca10:
    // 0x10ca10: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x10ca10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10ca14:
    // 0x10ca14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10ca14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10ca18:
    // 0x10ca18: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x10ca18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_10ca1c:
    // 0x10ca1c: 0x320f809  jalr        $t9
label_10ca20:
    if (ctx->pc == 0x10CA20u) {
        ctx->pc = 0x10CA24u;
        goto label_10ca24;
    }
    ctx->pc = 0x10CA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CA24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA1Cu, 0x10CA24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CA24u;
label_10ca24:
    // 0x10ca24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10ca24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10ca28:
    // 0x10ca28: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10ca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10ca2c:
    // 0x10ca2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10ca2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10ca30:
    // 0x10ca30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10ca30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10ca34:
    // 0x10ca34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10ca34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10ca38:
    // 0x10ca38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10ca38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10ca3c:
    // 0x10ca3c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10ca3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10ca40:
    // 0x10ca40: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x10ca40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_10ca44:
    // 0x10ca44: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_10ca48:
    if (ctx->pc == 0x10CA48u) {
        ctx->pc = 0x10CA4Cu;
        goto label_10ca4c;
    }
    ctx->pc = 0x10CA44u;
    {
        const bool branch_taken_0x10ca44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ca44) {
            ctx->pc = 0x10CA60u;
            goto label_10ca60;
        }
    }
    ctx->pc = 0x10CA4Cu;
label_10ca4c:
    // 0x10ca4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10ca50:
    // 0x10ca50: 0xc041144  jal         func_104510
label_10ca54:
    if (ctx->pc == 0x10CA54u) {
        ctx->pc = 0x10CA58u;
        goto label_10ca58;
    }
    ctx->pc = 0x10CA50u;
    SET_GPR_U32(ctx, 31, 0x10CA58u);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x10CA50u, 0x10CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA58u;
label_10ca58:
    // 0x10ca58: 0x1642ffec  bne         $s2, $v0, . + 4 + (-0x14 << 2)
label_10ca5c:
    if (ctx->pc == 0x10CA5Cu) {
        ctx->pc = 0x10CA60u;
        goto label_10ca60;
    }
    ctx->pc = 0x10CA58u;
    {
        const bool branch_taken_0x10ca58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x10ca58) {
            ctx->pc = 0x10CA0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ca0c;
        }
    }
    ctx->pc = 0x10CA60u;
label_10ca60:
    // 0x10ca60: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x10ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10ca64:
    // 0x10ca64: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x10ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_10ca68:
    // 0x10ca68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ca68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ca6c:
    // 0x10ca6c: 0xc0432c4  jal         func_10CB10
label_10ca70:
    if (ctx->pc == 0x10CA70u) {
        ctx->pc = 0x10CA74u;
        goto label_10ca74;
    }
    ctx->pc = 0x10CA6Cu;
    SET_GPR_U32(ctx, 31, 0x10CA74u);
    ctx->pc = 0x10CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB10u, 0x10CA6Cu, 0x10CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA74u;
label_10ca74:
    // 0x10ca74: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x10ca74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10ca78:
    // 0x10ca78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ca7c:
    // 0x10ca7c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_10ca80:
    if (ctx->pc == 0x10CA80u) {
        ctx->pc = 0x10CA84u;
        goto label_10ca84;
    }
    ctx->pc = 0x10CA7Cu;
    {
        const bool branch_taken_0x10ca7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10ca7c) {
            ctx->pc = 0x10CA9Cu;
            goto label_10ca9c;
        }
    }
    ctx->pc = 0x10CA84u;
label_10ca84:
    // 0x10ca84: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x10ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_10ca88:
    // 0x10ca88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10ca88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ca8c:
    // 0x10ca8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10ca8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10ca90:
    // 0x10ca90: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x10ca90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_10ca94:
    // 0x10ca94: 0x320f809  jalr        $t9
label_10ca98:
    if (ctx->pc == 0x10CA98u) {
        ctx->pc = 0x10CA9Cu;
        goto label_10ca9c;
    }
    ctx->pc = 0x10CA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CA9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA94u, 0x10CA9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CA9Cu;
label_10ca9c:
    // 0x10ca9c: 0xc090864  jal         func_242190
label_10caa0:
    if (ctx->pc == 0x10CAA0u) {
        ctx->pc = 0x10CAA4u;
        goto label_10caa4;
    }
    ctx->pc = 0x10CA9Cu;
    SET_GPR_U32(ctx, 31, 0x10CAA4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x10CA9Cu, 0x10CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAA4u;
label_10caa4:
    // 0x10caa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10caa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10caa8:
    // 0x10caa8: 0xc090590  jal         func_241640
label_10caac:
    if (ctx->pc == 0x10CAACu) {
        ctx->pc = 0x10CAB0u;
        goto label_10cab0;
    }
    ctx->pc = 0x10CAA8u;
    SET_GPR_U32(ctx, 31, 0x10CAB0u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x10CAA8u, 0x10CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAB0u;
label_10cab0:
    // 0x10cab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10cab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10cab4:
    // 0x10cab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10cab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10cab8:
    // 0x10cab8: 0xc0915fc  jal         func_2457F0
label_10cabc:
    if (ctx->pc == 0x10CABCu) {
        ctx->pc = 0x10CAC0u;
        goto label_10cac0;
    }
    ctx->pc = 0x10CAB8u;
    SET_GPR_U32(ctx, 31, 0x10CAC0u);
    ctx->pc = 0x2457F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457F0u, 0x10CAB8u, 0x10CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAC0u;
label_10cac0:
    // 0x10cac0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10cac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10cac4:
    // 0x10cac4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10cac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10cac8:
    // 0x10cac8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10cac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10cacc:
    // 0x10cacc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10caccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10cad0:
    // 0x10cad0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10cad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10cad4:
    // 0x10cad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10cad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10cad8:
    // 0x10cad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10cad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10cadc:
    // 0x10cadc: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x10cadcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_10cae0:
    // 0x10cae0: 0x3e00008  jr          $ra
label_10cae4:
    if (ctx->pc == 0x10CAE4u) {
        ctx->pc = 0x10CAE8u;
        goto label_10cae8;
    }
    ctx->pc = 0x10CAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CAE8u;
label_10cae8:
    // 0x10cae8: 0x0  nop
    ctx->pc = 0x10cae8u;
    // NOP
label_10caec:
    // 0x10caec: 0x0  nop
    ctx->pc = 0x10caecu;
    // NOP
    ctx->pc = 0x10caf0u;
}
