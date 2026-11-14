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

// Function: sub_0047E840
// Address: 0x47e840 - 0x47eb50
void sub_0047E840_0x47e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E840_0x47e840");
#endif

    switch (ctx->pc) {
        case 0x47e840u: goto label_47e840;
        case 0x47e844u: goto label_47e844;
        case 0x47e848u: goto label_47e848;
        case 0x47e84cu: goto label_47e84c;
        case 0x47e850u: goto label_47e850;
        case 0x47e854u: goto label_47e854;
        case 0x47e858u: goto label_47e858;
        case 0x47e85cu: goto label_47e85c;
        case 0x47e860u: goto label_47e860;
        case 0x47e864u: goto label_47e864;
        case 0x47e868u: goto label_47e868;
        case 0x47e86cu: goto label_47e86c;
        case 0x47e870u: goto label_47e870;
        case 0x47e874u: goto label_47e874;
        case 0x47e878u: goto label_47e878;
        case 0x47e87cu: goto label_47e87c;
        case 0x47e880u: goto label_47e880;
        case 0x47e884u: goto label_47e884;
        case 0x47e888u: goto label_47e888;
        case 0x47e88cu: goto label_47e88c;
        case 0x47e890u: goto label_47e890;
        case 0x47e894u: goto label_47e894;
        case 0x47e898u: goto label_47e898;
        case 0x47e89cu: goto label_47e89c;
        case 0x47e8a0u: goto label_47e8a0;
        case 0x47e8a4u: goto label_47e8a4;
        case 0x47e8a8u: goto label_47e8a8;
        case 0x47e8acu: goto label_47e8ac;
        case 0x47e8b0u: goto label_47e8b0;
        case 0x47e8b4u: goto label_47e8b4;
        case 0x47e8b8u: goto label_47e8b8;
        case 0x47e8bcu: goto label_47e8bc;
        case 0x47e8c0u: goto label_47e8c0;
        case 0x47e8c4u: goto label_47e8c4;
        case 0x47e8c8u: goto label_47e8c8;
        case 0x47e8ccu: goto label_47e8cc;
        case 0x47e8d0u: goto label_47e8d0;
        case 0x47e8d4u: goto label_47e8d4;
        case 0x47e8d8u: goto label_47e8d8;
        case 0x47e8dcu: goto label_47e8dc;
        case 0x47e8e0u: goto label_47e8e0;
        case 0x47e8e4u: goto label_47e8e4;
        case 0x47e8e8u: goto label_47e8e8;
        case 0x47e8ecu: goto label_47e8ec;
        case 0x47e8f0u: goto label_47e8f0;
        case 0x47e8f4u: goto label_47e8f4;
        case 0x47e8f8u: goto label_47e8f8;
        case 0x47e8fcu: goto label_47e8fc;
        case 0x47e900u: goto label_47e900;
        case 0x47e904u: goto label_47e904;
        case 0x47e908u: goto label_47e908;
        case 0x47e90cu: goto label_47e90c;
        case 0x47e910u: goto label_47e910;
        case 0x47e914u: goto label_47e914;
        case 0x47e918u: goto label_47e918;
        case 0x47e91cu: goto label_47e91c;
        case 0x47e920u: goto label_47e920;
        case 0x47e924u: goto label_47e924;
        case 0x47e928u: goto label_47e928;
        case 0x47e92cu: goto label_47e92c;
        case 0x47e930u: goto label_47e930;
        case 0x47e934u: goto label_47e934;
        case 0x47e938u: goto label_47e938;
        case 0x47e93cu: goto label_47e93c;
        case 0x47e940u: goto label_47e940;
        case 0x47e944u: goto label_47e944;
        case 0x47e948u: goto label_47e948;
        case 0x47e94cu: goto label_47e94c;
        case 0x47e950u: goto label_47e950;
        case 0x47e954u: goto label_47e954;
        case 0x47e958u: goto label_47e958;
        case 0x47e95cu: goto label_47e95c;
        case 0x47e960u: goto label_47e960;
        case 0x47e964u: goto label_47e964;
        case 0x47e968u: goto label_47e968;
        case 0x47e96cu: goto label_47e96c;
        case 0x47e970u: goto label_47e970;
        case 0x47e974u: goto label_47e974;
        case 0x47e978u: goto label_47e978;
        case 0x47e97cu: goto label_47e97c;
        case 0x47e980u: goto label_47e980;
        case 0x47e984u: goto label_47e984;
        case 0x47e988u: goto label_47e988;
        case 0x47e98cu: goto label_47e98c;
        case 0x47e990u: goto label_47e990;
        case 0x47e994u: goto label_47e994;
        case 0x47e998u: goto label_47e998;
        case 0x47e99cu: goto label_47e99c;
        case 0x47e9a0u: goto label_47e9a0;
        case 0x47e9a4u: goto label_47e9a4;
        case 0x47e9a8u: goto label_47e9a8;
        case 0x47e9acu: goto label_47e9ac;
        case 0x47e9b0u: goto label_47e9b0;
        case 0x47e9b4u: goto label_47e9b4;
        case 0x47e9b8u: goto label_47e9b8;
        case 0x47e9bcu: goto label_47e9bc;
        case 0x47e9c0u: goto label_47e9c0;
        case 0x47e9c4u: goto label_47e9c4;
        case 0x47e9c8u: goto label_47e9c8;
        case 0x47e9ccu: goto label_47e9cc;
        case 0x47e9d0u: goto label_47e9d0;
        case 0x47e9d4u: goto label_47e9d4;
        case 0x47e9d8u: goto label_47e9d8;
        case 0x47e9dcu: goto label_47e9dc;
        case 0x47e9e0u: goto label_47e9e0;
        case 0x47e9e4u: goto label_47e9e4;
        case 0x47e9e8u: goto label_47e9e8;
        case 0x47e9ecu: goto label_47e9ec;
        case 0x47e9f0u: goto label_47e9f0;
        case 0x47e9f4u: goto label_47e9f4;
        case 0x47e9f8u: goto label_47e9f8;
        case 0x47e9fcu: goto label_47e9fc;
        case 0x47ea00u: goto label_47ea00;
        case 0x47ea04u: goto label_47ea04;
        case 0x47ea08u: goto label_47ea08;
        case 0x47ea0cu: goto label_47ea0c;
        case 0x47ea10u: goto label_47ea10;
        case 0x47ea14u: goto label_47ea14;
        case 0x47ea18u: goto label_47ea18;
        case 0x47ea1cu: goto label_47ea1c;
        case 0x47ea20u: goto label_47ea20;
        case 0x47ea24u: goto label_47ea24;
        case 0x47ea28u: goto label_47ea28;
        case 0x47ea2cu: goto label_47ea2c;
        case 0x47ea30u: goto label_47ea30;
        case 0x47ea34u: goto label_47ea34;
        case 0x47ea38u: goto label_47ea38;
        case 0x47ea3cu: goto label_47ea3c;
        case 0x47ea40u: goto label_47ea40;
        case 0x47ea44u: goto label_47ea44;
        case 0x47ea48u: goto label_47ea48;
        case 0x47ea4cu: goto label_47ea4c;
        case 0x47ea50u: goto label_47ea50;
        case 0x47ea54u: goto label_47ea54;
        case 0x47ea58u: goto label_47ea58;
        case 0x47ea5cu: goto label_47ea5c;
        case 0x47ea60u: goto label_47ea60;
        case 0x47ea64u: goto label_47ea64;
        case 0x47ea68u: goto label_47ea68;
        case 0x47ea6cu: goto label_47ea6c;
        case 0x47ea70u: goto label_47ea70;
        case 0x47ea74u: goto label_47ea74;
        case 0x47ea78u: goto label_47ea78;
        case 0x47ea7cu: goto label_47ea7c;
        case 0x47ea80u: goto label_47ea80;
        case 0x47ea84u: goto label_47ea84;
        case 0x47ea88u: goto label_47ea88;
        case 0x47ea8cu: goto label_47ea8c;
        case 0x47ea90u: goto label_47ea90;
        case 0x47ea94u: goto label_47ea94;
        case 0x47ea98u: goto label_47ea98;
        case 0x47ea9cu: goto label_47ea9c;
        case 0x47eaa0u: goto label_47eaa0;
        case 0x47eaa4u: goto label_47eaa4;
        case 0x47eaa8u: goto label_47eaa8;
        case 0x47eaacu: goto label_47eaac;
        case 0x47eab0u: goto label_47eab0;
        case 0x47eab4u: goto label_47eab4;
        case 0x47eab8u: goto label_47eab8;
        case 0x47eabcu: goto label_47eabc;
        case 0x47eac0u: goto label_47eac0;
        case 0x47eac4u: goto label_47eac4;
        case 0x47eac8u: goto label_47eac8;
        case 0x47eaccu: goto label_47eacc;
        case 0x47ead0u: goto label_47ead0;
        case 0x47ead4u: goto label_47ead4;
        case 0x47ead8u: goto label_47ead8;
        case 0x47eadcu: goto label_47eadc;
        case 0x47eae0u: goto label_47eae0;
        case 0x47eae4u: goto label_47eae4;
        case 0x47eae8u: goto label_47eae8;
        case 0x47eaecu: goto label_47eaec;
        case 0x47eaf0u: goto label_47eaf0;
        case 0x47eaf4u: goto label_47eaf4;
        case 0x47eaf8u: goto label_47eaf8;
        case 0x47eafcu: goto label_47eafc;
        case 0x47eb00u: goto label_47eb00;
        case 0x47eb04u: goto label_47eb04;
        case 0x47eb08u: goto label_47eb08;
        case 0x47eb0cu: goto label_47eb0c;
        case 0x47eb10u: goto label_47eb10;
        case 0x47eb14u: goto label_47eb14;
        case 0x47eb18u: goto label_47eb18;
        case 0x47eb1cu: goto label_47eb1c;
        case 0x47eb20u: goto label_47eb20;
        case 0x47eb24u: goto label_47eb24;
        case 0x47eb28u: goto label_47eb28;
        case 0x47eb2cu: goto label_47eb2c;
        case 0x47eb30u: goto label_47eb30;
        case 0x47eb34u: goto label_47eb34;
        case 0x47eb38u: goto label_47eb38;
        case 0x47eb3cu: goto label_47eb3c;
        case 0x47eb40u: goto label_47eb40;
        case 0x47eb44u: goto label_47eb44;
        case 0x47eb48u: goto label_47eb48;
        case 0x47eb4cu: goto label_47eb4c;
        default: break;
    }

    ctx->pc = 0x47e840u;

label_47e840:
    // 0x47e840: 0x27bdfc20  addiu       $sp, $sp, -0x3E0
    ctx->pc = 0x47e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966304));
label_47e844:
    // 0x47e844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47e848:
    // 0x47e848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47e848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47e84c:
    // 0x47e84c: 0xafa403b0  sw          $a0, 0x3B0($sp)
    ctx->pc = 0x47e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 4));
label_47e850:
    // 0x47e850: 0xafa503c0  sw          $a1, 0x3C0($sp)
    ctx->pc = 0x47e850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 5));
label_47e854:
    // 0x47e854: 0xafa603d0  sw          $a2, 0x3D0($sp)
    ctx->pc = 0x47e854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 6));
label_47e858:
    // 0x47e858: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47e858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47e85c:
    // 0x47e85c: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x47e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_47e860:
    // 0x47e860: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_47e864:
    if (ctx->pc == 0x47E864u) {
        ctx->pc = 0x47E868u;
        goto label_47e868;
    }
    ctx->pc = 0x47E860u;
    {
        const bool branch_taken_0x47e860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e860) {
            ctx->pc = 0x47E950u;
            goto label_47e950;
        }
    }
    ctx->pc = 0x47E868u;
label_47e868:
    // 0x47e868: 0x8f83c0a0  lw          $v1, -0x3F60($gp)
    ctx->pc = 0x47e868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951072)));
label_47e86c:
    // 0x47e86c: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x47e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_47e870:
    // 0x47e870: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47e874:
    // 0x47e874: 0x8f82c09c  lw          $v0, -0x3F64($gp)
    ctx->pc = 0x47e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951068)));
label_47e878:
    // 0x47e878: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x47e878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47e87c:
    // 0x47e87c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_47e880:
    if (ctx->pc == 0x47E880u) {
        ctx->pc = 0x47E884u;
        goto label_47e884;
    }
    ctx->pc = 0x47E87Cu;
    {
        const bool branch_taken_0x47e87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e87c) {
            ctx->pc = 0x47E950u;
            goto label_47e950;
        }
    }
    ctx->pc = 0x47E884u;
label_47e884:
    // 0x47e884: 0x8f82c084  lw          $v0, -0x3F7C($gp)
    ctx->pc = 0x47e884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951044)));
label_47e888:
    // 0x47e888: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_47e88c:
    if (ctx->pc == 0x47E88Cu) {
        ctx->pc = 0x47E890u;
        goto label_47e890;
    }
    ctx->pc = 0x47E888u;
    {
        const bool branch_taken_0x47e888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e888) {
            ctx->pc = 0x47E944u;
            goto label_47e944;
        }
    }
    ctx->pc = 0x47E890u;
label_47e890:
    // 0x47e890: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
label_47e894:
    if (ctx->pc == 0x47E894u) {
        ctx->pc = 0x47E898u;
        goto label_47e898;
    }
    ctx->pc = 0x47E890u;
    {
        const bool branch_taken_0x47e890 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e890) {
            ctx->pc = 0x47E93Cu;
            goto label_47e93c;
        }
    }
    ctx->pc = 0x47E898u;
label_47e898:
    // 0x47e898: 0x8f82b510  lw          $v0, -0x4AF0($gp)
    ctx->pc = 0x47e898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948112)));
label_47e89c:
    // 0x47e89c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47e8a0:
    if (ctx->pc == 0x47E8A0u) {
        ctx->pc = 0x47E8A4u;
        goto label_47e8a4;
    }
    ctx->pc = 0x47E89Cu;
    {
        const bool branch_taken_0x47e89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e89c) {
            ctx->pc = 0x47E93Cu;
            goto label_47e93c;
        }
    }
    ctx->pc = 0x47E8A4u;
label_47e8a4:
    // 0x47e8a4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47e8a8:
    // 0x47e8a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47e8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47e8ac:
    // 0x47e8ac: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x47e8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_47e8b0:
    // 0x47e8b0: 0xc115ee8  jal         func_457BA0
label_47e8b4:
    if (ctx->pc == 0x47E8B4u) {
        ctx->pc = 0x47E8B8u;
        goto label_47e8b8;
    }
    ctx->pc = 0x47E8B0u;
    SET_GPR_U32(ctx, 31, 0x47E8B8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47E8B0u, 0x47E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E8B8u;
label_47e8b8:
    // 0x47e8b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47e8bc:
    if (ctx->pc == 0x47E8BCu) {
        ctx->pc = 0x47E8C0u;
        goto label_47e8c0;
    }
    ctx->pc = 0x47E8B8u;
    {
        const bool branch_taken_0x47e8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e8b8) {
            ctx->pc = 0x47E93Cu;
            goto label_47e93c;
        }
    }
    ctx->pc = 0x47E8C0u;
label_47e8c0:
    // 0x47e8c0: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x47e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_47e8c4:
    // 0x47e8c4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47e8c8:
    if (ctx->pc == 0x47E8C8u) {
        ctx->pc = 0x47E8CCu;
        goto label_47e8cc;
    }
    ctx->pc = 0x47E8C4u;
    {
        const bool branch_taken_0x47e8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e8c4) {
            ctx->pc = 0x47E93Cu;
            goto label_47e93c;
        }
    }
    ctx->pc = 0x47E8CCu;
label_47e8cc:
    // 0x47e8cc: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x47e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_47e8d0:
    // 0x47e8d0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47e8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47e8d4:
    // 0x47e8d4: 0x8fa603a4  lw          $a2, 0x3A4($sp)
    ctx->pc = 0x47e8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_47e8d8:
    // 0x47e8d8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47e8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47e8dc:
    // 0x47e8dc: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47e8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47e8e0:
    // 0x47e8e0: 0x2408067a  addiu       $t0, $zero, 0x67A
    ctx->pc = 0x47e8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1658));
label_47e8e4:
    // 0x47e8e4: 0x2789b4f0  addiu       $t1, $gp, -0x4B10
    ctx->pc = 0x47e8e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948080));
label_47e8e8:
    // 0x47e8e8: 0xc113940  jal         func_44E500
label_47e8ec:
    if (ctx->pc == 0x47E8ECu) {
        ctx->pc = 0x47E8F0u;
        goto label_47e8f0;
    }
    ctx->pc = 0x47E8E8u;
    SET_GPR_U32(ctx, 31, 0x47E8F0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47E8E8u, 0x47E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E8F0u;
label_47e8f0:
    // 0x47e8f0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x47e8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_47e8f4:
    // 0x47e8f4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47e8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47e8f8:
    // 0x47e8f8: 0x24a51820  addiu       $a1, $a1, 0x1820
    ctx->pc = 0x47e8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6176));
label_47e8fc:
    // 0x47e8fc: 0xc115c24  jal         func_457090
label_47e900:
    if (ctx->pc == 0x47E900u) {
        ctx->pc = 0x47E904u;
        goto label_47e904;
    }
    ctx->pc = 0x47E8FCu;
    SET_GPR_U32(ctx, 31, 0x47E904u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47E8FCu, 0x47E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E904u;
label_47e904:
    // 0x47e904: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x47e904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_47e908:
    // 0x47e908: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x47e908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_47e90c:
    // 0x47e90c: 0x40f809  jalr        $v0
label_47e910:
    if (ctx->pc == 0x47E910u) {
        ctx->pc = 0x47E914u;
        goto label_47e914;
    }
    ctx->pc = 0x47E90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E914u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E90Cu, 0x47E914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E914u;
label_47e914:
    // 0x47e914: 0xaf82b510  sw          $v0, -0x4AF0($gp)
    ctx->pc = 0x47e914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948112), GPR_U32(ctx, 2));
label_47e918:
    // 0x47e918: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x47e918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_47e91c:
    // 0x47e91c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47e920:
    if (ctx->pc == 0x47E920u) {
        ctx->pc = 0x47E924u;
        goto label_47e924;
    }
    ctx->pc = 0x47E91Cu;
    {
        const bool branch_taken_0x47e91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e91c) {
            ctx->pc = 0x47E92Cu;
            goto label_47e92c;
        }
    }
    ctx->pc = 0x47E924u;
label_47e924:
    // 0x47e924: 0xd  break       0
    ctx->pc = 0x47e924u;
    runtime->handleBreak(rdram, ctx);
label_47e928:
    // 0x47e928: 0x0  nop
    ctx->pc = 0x47e928u;
    // NOP
label_47e92c:
    // 0x47e92c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x47e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_47e930:
    // 0x47e930: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47e930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47e934:
    // 0x47e934: 0xc11392c  jal         func_44E4B0
label_47e938:
    if (ctx->pc == 0x47E938u) {
        ctx->pc = 0x47E93Cu;
        goto label_47e93c;
    }
    ctx->pc = 0x47E934u;
    SET_GPR_U32(ctx, 31, 0x47E93Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47E934u, 0x47E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E93Cu;
label_47e93c:
    // 0x47e93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e940:
    // 0x47e940: 0xaf82c084  sw          $v0, -0x3F7C($gp)
    ctx->pc = 0x47e940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951044), GPR_U32(ctx, 2));
label_47e944:
    // 0x47e944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47e944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47e948:
    // 0x47e948: 0x1000007c  b           . + 4 + (0x7C << 2)
label_47e94c:
    if (ctx->pc == 0x47E94Cu) {
        ctx->pc = 0x47E950u;
        goto label_47e950;
    }
    ctx->pc = 0x47E948u;
    {
        const bool branch_taken_0x47e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e948) {
            ctx->pc = 0x47EB3Cu;
            goto label_47eb3c;
        }
    }
    ctx->pc = 0x47E950u;
label_47e950:
    // 0x47e950: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x47e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_47e954:
    // 0x47e954: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_47e958:
    if (ctx->pc == 0x47E958u) {
        ctx->pc = 0x47E95Cu;
        goto label_47e95c;
    }
    ctx->pc = 0x47E954u;
    {
        const bool branch_taken_0x47e954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e954) {
            ctx->pc = 0x47EA44u;
            goto label_47ea44;
        }
    }
    ctx->pc = 0x47E95Cu;
label_47e95c:
    // 0x47e95c: 0x8f83c0a8  lw          $v1, -0x3F58($gp)
    ctx->pc = 0x47e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951080)));
label_47e960:
    // 0x47e960: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x47e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_47e964:
    // 0x47e964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47e964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47e968:
    // 0x47e968: 0x8f82c09c  lw          $v0, -0x3F64($gp)
    ctx->pc = 0x47e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951068)));
label_47e96c:
    // 0x47e96c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x47e96cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47e970:
    // 0x47e970: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_47e974:
    if (ctx->pc == 0x47E974u) {
        ctx->pc = 0x47E978u;
        goto label_47e978;
    }
    ctx->pc = 0x47E970u;
    {
        const bool branch_taken_0x47e970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e970) {
            ctx->pc = 0x47EA44u;
            goto label_47ea44;
        }
    }
    ctx->pc = 0x47E978u;
label_47e978:
    // 0x47e978: 0x8f82c088  lw          $v0, -0x3F78($gp)
    ctx->pc = 0x47e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951048)));
label_47e97c:
    // 0x47e97c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_47e980:
    if (ctx->pc == 0x47E980u) {
        ctx->pc = 0x47E984u;
        goto label_47e984;
    }
    ctx->pc = 0x47E97Cu;
    {
        const bool branch_taken_0x47e97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e97c) {
            ctx->pc = 0x47EA38u;
            goto label_47ea38;
        }
    }
    ctx->pc = 0x47E984u;
label_47e984:
    // 0x47e984: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
label_47e988:
    if (ctx->pc == 0x47E988u) {
        ctx->pc = 0x47E98Cu;
        goto label_47e98c;
    }
    ctx->pc = 0x47E984u;
    {
        const bool branch_taken_0x47e984 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e984) {
            ctx->pc = 0x47EA30u;
            goto label_47ea30;
        }
    }
    ctx->pc = 0x47E98Cu;
label_47e98c:
    // 0x47e98c: 0x8f82b514  lw          $v0, -0x4AEC($gp)
    ctx->pc = 0x47e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948116)));
label_47e990:
    // 0x47e990: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47e994:
    if (ctx->pc == 0x47E994u) {
        ctx->pc = 0x47E998u;
        goto label_47e998;
    }
    ctx->pc = 0x47E990u;
    {
        const bool branch_taken_0x47e990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e990) {
            ctx->pc = 0x47EA30u;
            goto label_47ea30;
        }
    }
    ctx->pc = 0x47E998u;
label_47e998:
    // 0x47e998: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47e998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47e99c:
    // 0x47e99c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47e99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47e9a0:
    // 0x47e9a0: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x47e9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_47e9a4:
    // 0x47e9a4: 0xc115ee8  jal         func_457BA0
label_47e9a8:
    if (ctx->pc == 0x47E9A8u) {
        ctx->pc = 0x47E9ACu;
        goto label_47e9ac;
    }
    ctx->pc = 0x47E9A4u;
    SET_GPR_U32(ctx, 31, 0x47E9ACu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47E9A4u, 0x47E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E9ACu;
label_47e9ac:
    // 0x47e9ac: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47e9b0:
    if (ctx->pc == 0x47E9B0u) {
        ctx->pc = 0x47E9B4u;
        goto label_47e9b4;
    }
    ctx->pc = 0x47E9ACu;
    {
        const bool branch_taken_0x47e9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e9ac) {
            ctx->pc = 0x47EA30u;
            goto label_47ea30;
        }
    }
    ctx->pc = 0x47E9B4u;
label_47e9b4:
    // 0x47e9b4: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x47e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_47e9b8:
    // 0x47e9b8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47e9bc:
    if (ctx->pc == 0x47E9BCu) {
        ctx->pc = 0x47E9C0u;
        goto label_47e9c0;
    }
    ctx->pc = 0x47E9B8u;
    {
        const bool branch_taken_0x47e9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e9b8) {
            ctx->pc = 0x47EA30u;
            goto label_47ea30;
        }
    }
    ctx->pc = 0x47E9C0u;
label_47e9c0:
    // 0x47e9c0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x47e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_47e9c4:
    // 0x47e9c4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47e9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47e9c8:
    // 0x47e9c8: 0x8fa60394  lw          $a2, 0x394($sp)
    ctx->pc = 0x47e9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_47e9cc:
    // 0x47e9cc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47e9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47e9d0:
    // 0x47e9d0: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47e9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47e9d4:
    // 0x47e9d4: 0x2408068b  addiu       $t0, $zero, 0x68B
    ctx->pc = 0x47e9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1675));
label_47e9d8:
    // 0x47e9d8: 0x2789b4f0  addiu       $t1, $gp, -0x4B10
    ctx->pc = 0x47e9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948080));
label_47e9dc:
    // 0x47e9dc: 0xc113940  jal         func_44E500
label_47e9e0:
    if (ctx->pc == 0x47E9E0u) {
        ctx->pc = 0x47E9E4u;
        goto label_47e9e4;
    }
    ctx->pc = 0x47E9DCu;
    SET_GPR_U32(ctx, 31, 0x47E9E4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47E9DCu, 0x47E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E9E4u;
label_47e9e4:
    // 0x47e9e4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x47e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_47e9e8:
    // 0x47e9e8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47e9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47e9ec:
    // 0x47e9ec: 0x24a51870  addiu       $a1, $a1, 0x1870
    ctx->pc = 0x47e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6256));
label_47e9f0:
    // 0x47e9f0: 0xc115c24  jal         func_457090
label_47e9f4:
    if (ctx->pc == 0x47E9F4u) {
        ctx->pc = 0x47E9F8u;
        goto label_47e9f8;
    }
    ctx->pc = 0x47E9F0u;
    SET_GPR_U32(ctx, 31, 0x47E9F8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47E9F0u, 0x47E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E9F8u;
label_47e9f8:
    // 0x47e9f8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x47e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_47e9fc:
    // 0x47e9fc: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x47e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_47ea00:
    // 0x47ea00: 0x40f809  jalr        $v0
label_47ea04:
    if (ctx->pc == 0x47EA04u) {
        ctx->pc = 0x47EA08u;
        goto label_47ea08;
    }
    ctx->pc = 0x47EA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47EA08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EA00u, 0x47EA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47EA08u;
label_47ea08:
    // 0x47ea08: 0xaf82b514  sw          $v0, -0x4AEC($gp)
    ctx->pc = 0x47ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948116), GPR_U32(ctx, 2));
label_47ea0c:
    // 0x47ea0c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x47ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47ea10:
    // 0x47ea10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47ea14:
    if (ctx->pc == 0x47EA14u) {
        ctx->pc = 0x47EA18u;
        goto label_47ea18;
    }
    ctx->pc = 0x47EA10u;
    {
        const bool branch_taken_0x47ea10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ea10) {
            ctx->pc = 0x47EA20u;
            goto label_47ea20;
        }
    }
    ctx->pc = 0x47EA18u;
label_47ea18:
    // 0x47ea18: 0xd  break       0
    ctx->pc = 0x47ea18u;
    runtime->handleBreak(rdram, ctx);
label_47ea1c:
    // 0x47ea1c: 0x0  nop
    ctx->pc = 0x47ea1cu;
    // NOP
label_47ea20:
    // 0x47ea20: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x47ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_47ea24:
    // 0x47ea24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47ea28:
    // 0x47ea28: 0xc11392c  jal         func_44E4B0
label_47ea2c:
    if (ctx->pc == 0x47EA2Cu) {
        ctx->pc = 0x47EA30u;
        goto label_47ea30;
    }
    ctx->pc = 0x47EA28u;
    SET_GPR_U32(ctx, 31, 0x47EA30u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47EA28u, 0x47EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EA30u;
label_47ea30:
    // 0x47ea30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47ea34:
    // 0x47ea34: 0xaf82c088  sw          $v0, -0x3F78($gp)
    ctx->pc = 0x47ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951048), GPR_U32(ctx, 2));
label_47ea38:
    // 0x47ea38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47ea38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47ea3c:
    // 0x47ea3c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_47ea40:
    if (ctx->pc == 0x47EA40u) {
        ctx->pc = 0x47EA44u;
        goto label_47ea44;
    }
    ctx->pc = 0x47EA3Cu;
    {
        const bool branch_taken_0x47ea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ea3c) {
            ctx->pc = 0x47EB3Cu;
            goto label_47eb3c;
        }
    }
    ctx->pc = 0x47EA44u;
label_47ea44:
    // 0x47ea44: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x47ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_47ea48:
    // 0x47ea48: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_47ea4c:
    if (ctx->pc == 0x47EA4Cu) {
        ctx->pc = 0x47EA50u;
        goto label_47ea50;
    }
    ctx->pc = 0x47EA48u;
    {
        const bool branch_taken_0x47ea48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ea48) {
            ctx->pc = 0x47EB38u;
            goto label_47eb38;
        }
    }
    ctx->pc = 0x47EA50u;
label_47ea50:
    // 0x47ea50: 0x8f83c094  lw          $v1, -0x3F6C($gp)
    ctx->pc = 0x47ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951060)));
label_47ea54:
    // 0x47ea54: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x47ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_47ea58:
    // 0x47ea58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47ea5c:
    // 0x47ea5c: 0x8f82c090  lw          $v0, -0x3F70($gp)
    ctx->pc = 0x47ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951056)));
label_47ea60:
    // 0x47ea60: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x47ea60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47ea64:
    // 0x47ea64: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_47ea68:
    if (ctx->pc == 0x47EA68u) {
        ctx->pc = 0x47EA6Cu;
        goto label_47ea6c;
    }
    ctx->pc = 0x47EA64u;
    {
        const bool branch_taken_0x47ea64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ea64) {
            ctx->pc = 0x47EB38u;
            goto label_47eb38;
        }
    }
    ctx->pc = 0x47EA6Cu;
label_47ea6c:
    // 0x47ea6c: 0x8f82c08c  lw          $v0, -0x3F74($gp)
    ctx->pc = 0x47ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951052)));
label_47ea70:
    // 0x47ea70: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_47ea74:
    if (ctx->pc == 0x47EA74u) {
        ctx->pc = 0x47EA78u;
        goto label_47ea78;
    }
    ctx->pc = 0x47EA70u;
    {
        const bool branch_taken_0x47ea70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ea70) {
            ctx->pc = 0x47EB2Cu;
            goto label_47eb2c;
        }
    }
    ctx->pc = 0x47EA78u;
label_47ea78:
    // 0x47ea78: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
label_47ea7c:
    if (ctx->pc == 0x47EA7Cu) {
        ctx->pc = 0x47EA80u;
        goto label_47ea80;
    }
    ctx->pc = 0x47EA78u;
    {
        const bool branch_taken_0x47ea78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ea78) {
            ctx->pc = 0x47EB24u;
            goto label_47eb24;
        }
    }
    ctx->pc = 0x47EA80u;
label_47ea80:
    // 0x47ea80: 0x8f82b518  lw          $v0, -0x4AE8($gp)
    ctx->pc = 0x47ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948120)));
label_47ea84:
    // 0x47ea84: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47ea88:
    if (ctx->pc == 0x47EA88u) {
        ctx->pc = 0x47EA8Cu;
        goto label_47ea8c;
    }
    ctx->pc = 0x47EA84u;
    {
        const bool branch_taken_0x47ea84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ea84) {
            ctx->pc = 0x47EB24u;
            goto label_47eb24;
        }
    }
    ctx->pc = 0x47EA8Cu;
label_47ea8c:
    // 0x47ea8c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47ea90:
    // 0x47ea90: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47ea94:
    // 0x47ea94: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x47ea94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_47ea98:
    // 0x47ea98: 0xc115ee8  jal         func_457BA0
label_47ea9c:
    if (ctx->pc == 0x47EA9Cu) {
        ctx->pc = 0x47EAA0u;
        goto label_47eaa0;
    }
    ctx->pc = 0x47EA98u;
    SET_GPR_U32(ctx, 31, 0x47EAA0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47EA98u, 0x47EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EAA0u;
label_47eaa0:
    // 0x47eaa0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47eaa4:
    if (ctx->pc == 0x47EAA4u) {
        ctx->pc = 0x47EAA8u;
        goto label_47eaa8;
    }
    ctx->pc = 0x47EAA0u;
    {
        const bool branch_taken_0x47eaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eaa0) {
            ctx->pc = 0x47EB24u;
            goto label_47eb24;
        }
    }
    ctx->pc = 0x47EAA8u;
label_47eaa8:
    // 0x47eaa8: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x47eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_47eaac:
    // 0x47eaac: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47eab0:
    if (ctx->pc == 0x47EAB0u) {
        ctx->pc = 0x47EAB4u;
        goto label_47eab4;
    }
    ctx->pc = 0x47EAACu;
    {
        const bool branch_taken_0x47eaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eaac) {
            ctx->pc = 0x47EB24u;
            goto label_47eb24;
        }
    }
    ctx->pc = 0x47EAB4u;
label_47eab4:
    // 0x47eab4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47eab8:
    // 0x47eab8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47eabc:
    // 0x47eabc: 0x8fa60384  lw          $a2, 0x384($sp)
    ctx->pc = 0x47eabcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
label_47eac0:
    // 0x47eac0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47eac0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47eac4:
    // 0x47eac4: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47eac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47eac8:
    // 0x47eac8: 0x2408069d  addiu       $t0, $zero, 0x69D
    ctx->pc = 0x47eac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1693));
label_47eacc:
    // 0x47eacc: 0x2789b4f0  addiu       $t1, $gp, -0x4B10
    ctx->pc = 0x47eaccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948080));
label_47ead0:
    // 0x47ead0: 0xc113940  jal         func_44E500
label_47ead4:
    if (ctx->pc == 0x47EAD4u) {
        ctx->pc = 0x47EAD8u;
        goto label_47ead8;
    }
    ctx->pc = 0x47EAD0u;
    SET_GPR_U32(ctx, 31, 0x47EAD8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47EAD0u, 0x47EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EAD8u;
label_47ead8:
    // 0x47ead8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47eadc:
    // 0x47eadc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47eadcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47eae0:
    // 0x47eae0: 0x24a518c0  addiu       $a1, $a1, 0x18C0
    ctx->pc = 0x47eae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6336));
label_47eae4:
    // 0x47eae4: 0xc115c24  jal         func_457090
label_47eae8:
    if (ctx->pc == 0x47EAE8u) {
        ctx->pc = 0x47EAECu;
        goto label_47eaec;
    }
    ctx->pc = 0x47EAE4u;
    SET_GPR_U32(ctx, 31, 0x47EAECu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47EAE4u, 0x47EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EAECu;
label_47eaec:
    // 0x47eaec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47eaf0:
    // 0x47eaf0: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x47eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_47eaf4:
    // 0x47eaf4: 0x40f809  jalr        $v0
label_47eaf8:
    if (ctx->pc == 0x47EAF8u) {
        ctx->pc = 0x47EAFCu;
        goto label_47eafc;
    }
    ctx->pc = 0x47EAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47EAFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EAF4u, 0x47EAFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47EAFCu;
label_47eafc:
    // 0x47eafc: 0xaf82b518  sw          $v0, -0x4AE8($gp)
    ctx->pc = 0x47eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948120), GPR_U32(ctx, 2));
label_47eb00:
    // 0x47eb00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_47eb04:
    // 0x47eb04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47eb08:
    if (ctx->pc == 0x47EB08u) {
        ctx->pc = 0x47EB0Cu;
        goto label_47eb0c;
    }
    ctx->pc = 0x47EB04u;
    {
        const bool branch_taken_0x47eb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eb04) {
            ctx->pc = 0x47EB14u;
            goto label_47eb14;
        }
    }
    ctx->pc = 0x47EB0Cu;
label_47eb0c:
    // 0x47eb0c: 0xd  break       0
    ctx->pc = 0x47eb0cu;
    runtime->handleBreak(rdram, ctx);
label_47eb10:
    // 0x47eb10: 0x0  nop
    ctx->pc = 0x47eb10u;
    // NOP
label_47eb14:
    // 0x47eb14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47eb18:
    // 0x47eb18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47eb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47eb1c:
    // 0x47eb1c: 0xc11392c  jal         func_44E4B0
label_47eb20:
    if (ctx->pc == 0x47EB20u) {
        ctx->pc = 0x47EB24u;
        goto label_47eb24;
    }
    ctx->pc = 0x47EB1Cu;
    SET_GPR_U32(ctx, 31, 0x47EB24u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47EB1Cu, 0x47EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EB24u;
label_47eb24:
    // 0x47eb24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47eb28:
    // 0x47eb28: 0xaf82c08c  sw          $v0, -0x3F74($gp)
    ctx->pc = 0x47eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951052), GPR_U32(ctx, 2));
label_47eb2c:
    // 0x47eb2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47eb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47eb30:
    // 0x47eb30: 0x10000002  b           . + 4 + (0x2 << 2)
label_47eb34:
    if (ctx->pc == 0x47EB34u) {
        ctx->pc = 0x47EB38u;
        goto label_47eb38;
    }
    ctx->pc = 0x47EB30u;
    {
        const bool branch_taken_0x47eb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eb30) {
            ctx->pc = 0x47EB3Cu;
            goto label_47eb3c;
        }
    }
    ctx->pc = 0x47EB38u;
label_47eb38:
    // 0x47eb38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47eb3c:
    // 0x47eb3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47eb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47eb40:
    // 0x47eb40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47eb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47eb44:
    // 0x47eb44: 0x27bd03e0  addiu       $sp, $sp, 0x3E0
    ctx->pc = 0x47eb44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_47eb48:
    // 0x47eb48: 0x3e00008  jr          $ra
label_47eb4c:
    if (ctx->pc == 0x47EB4Cu) {
        ctx->pc = 0x47EB50u;
        goto label_fallthrough_0x47eb48;
    }
    ctx->pc = 0x47EB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47eb48:
    ctx->pc = 0x47EB50u;
}
