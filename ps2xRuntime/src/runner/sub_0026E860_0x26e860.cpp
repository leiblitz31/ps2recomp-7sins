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

// Function: sub_0026E860
// Address: 0x26e860 - 0x26eac0
void sub_0026E860_0x26e860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E860_0x26e860");
#endif

    switch (ctx->pc) {
        case 0x26e8acu: goto label_26e8ac;
        case 0x26e8d4u: goto label_26e8d4;
        case 0x26e8f8u: goto label_26e8f8;
        case 0x26e908u: goto label_26e908;
        case 0x26e924u: goto label_26e924;
        case 0x26e93cu: goto label_26e93c;
        case 0x26e950u: goto label_26e950;
        case 0x26e978u: goto label_26e978;
        case 0x26e980u: goto label_26e980;
        case 0x26e98cu: goto label_26e98c;
        case 0x26e9a0u: goto label_26e9a0;
        case 0x26e9b0u: goto label_26e9b0;
        case 0x26e9bcu: goto label_26e9bc;
        case 0x26e9dcu: goto label_26e9dc;
        case 0x26e9f0u: goto label_26e9f0;
        case 0x26ea4cu: goto label_26ea4c;
        case 0x26ea80u: goto label_26ea80;
        default: break;
    }

    ctx->pc = 0x26e860u;

    // 0x26e860: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x26e860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x26e864: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26e864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26e868: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26e868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26e86c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26e870: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26e870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26e874: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26e874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26e878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26e878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26e87c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26e87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26e880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26e880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26e884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e88c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x26e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x26e890: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x26e890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x26e894: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x26e894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x26e898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e89c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x26e89cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26e8a0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x26e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26e8a4: 0xc085530  jal         func_2154C0
    ctx->pc = 0x26E8A4u;
    SET_GPR_U32(ctx, 31, 0x26E8ACu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x26E8A4u, 0x26E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8ACu;
label_26e8ac:
    // 0x26e8ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x26e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26e8b0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E8B0u;
    {
        const bool branch_taken_0x26e8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e8b0) {
            ctx->pc = 0x26E8C4u;
            goto label_26e8c4;
        }
    }
    ctx->pc = 0x26E8B8u;
    // 0x26e8b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26e8b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8bc: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x26E8BCu;
    {
        const bool branch_taken_0x26e8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e8bc) {
            ctx->pc = 0x26EA8Cu;
            goto label_26ea8c;
        }
    }
    ctx->pc = 0x26E8C4u;
label_26e8c4:
    // 0x26e8c4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x26e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26e8c8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x26e8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x26e8cc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x26E8CCu;
    SET_GPR_U32(ctx, 31, 0x26E8D4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26E8CCu, 0x26E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8D4u;
label_26e8d4:
    // 0x26e8d4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26e8d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8d8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x26e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26e8dc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x26e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26e8e0: 0x10620069  beq         $v1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26E8E0u;
    {
        const bool branch_taken_0x26e8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e8e0) {
            ctx->pc = 0x26EA88u;
            goto label_26ea88;
        }
    }
    ctx->pc = 0x26E8E8u;
    // 0x26e8e8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x26e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26e8ec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26e8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26e8f0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x26E8F0u;
    SET_GPR_U32(ctx, 31, 0x26E8F8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26E8F0u, 0x26E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8F8u;
label_26e8f8:
    // 0x26e8f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26e8f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26e8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e900: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x26E900u;
    SET_GPR_U32(ctx, 31, 0x26E908u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x26E900u, 0x26E908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E908u;
label_26e908:
    // 0x26e908: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x26e908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26e90c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E90Cu;
    {
        const bool branch_taken_0x26e90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e90c) {
            ctx->pc = 0x26E92Cu;
            goto label_26e92c;
        }
    }
    ctx->pc = 0x26E914u;
    // 0x26e914: 0x8fbe0100  lw          $fp, 0x100($sp)
    ctx->pc = 0x26e914u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26e918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e91c: 0xc096ea4  jal         func_25BA90
    ctx->pc = 0x26E91Cu;
    SET_GPR_U32(ctx, 31, 0x26E924u);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x26E91Cu, 0x26E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E924u;
label_26e924:
    // 0x26e924: 0x13c20058  beq         $fp, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x26E924u;
    {
        const bool branch_taken_0x26e924 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e924) {
            ctx->pc = 0x26EA88u;
            goto label_26ea88;
        }
    }
    ctx->pc = 0x26E92Cu;
label_26e92c:
    // 0x26e92c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x26e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26e930: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x26e930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x26e934: 0xc085538  jal         func_2154E0
    ctx->pc = 0x26E934u;
    SET_GPR_U32(ctx, 31, 0x26E93Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26E934u, 0x26E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E93Cu;
label_26e93c:
    // 0x26e93c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26e93cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e944: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x26e944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26e948: 0xc0976f8  jal         func_25DBE0
    ctx->pc = 0x26E948u;
    SET_GPR_U32(ctx, 31, 0x26E950u);
    ctx->pc = 0x25DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DBE0u, 0x26E948u, 0x26E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E950u;
label_26e950:
    // 0x26e950: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26e950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26e954: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26e954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26e958: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x26e958u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26e95c: 0x1220004a  beqz        $s1, . + 4 + (0x4A << 2)
    ctx->pc = 0x26E95Cu;
    {
        const bool branch_taken_0x26e95c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e95c) {
            ctx->pc = 0x26EA88u;
            goto label_26ea88;
        }
    }
    ctx->pc = 0x26E964u;
    // 0x26e964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e968: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x26e968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e96c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x26e96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26e970: 0xc097a94  jal         func_25EA50
    ctx->pc = 0x26E970u;
    SET_GPR_U32(ctx, 31, 0x26E978u);
    ctx->pc = 0x25EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EA50u, 0x26E970u, 0x26E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E978u;
label_26e978:
    // 0x26e978: 0xc090864  jal         func_242190
    ctx->pc = 0x26E978u;
    SET_GPR_U32(ctx, 31, 0x26E980u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x26E978u, 0x26E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E980u;
label_26e980:
    // 0x26e980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e984: 0xc090590  jal         func_241640
    ctx->pc = 0x26E984u;
    SET_GPR_U32(ctx, 31, 0x26E98Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x26E984u, 0x26E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E98Cu;
label_26e98c:
    // 0x26e98c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26e98cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e990: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26e990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e994: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x26e994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26e998: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x26E998u;
    SET_GPR_U32(ctx, 31, 0x26E9A0u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x26E998u, 0x26E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9A0u;
label_26e9a0:
    // 0x26e9a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26e9a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9a8: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x26E9A8u;
    SET_GPR_U32(ctx, 31, 0x26E9B0u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x26E9A8u, 0x26E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9B0u;
label_26e9b0:
    // 0x26e9b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9b4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x26E9B4u;
    {
        const bool branch_taken_0x26e9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e9b4) {
            ctx->pc = 0x26EA74u;
            goto label_26ea74;
        }
    }
    ctx->pc = 0x26E9BCu;
label_26e9bc:
    // 0x26e9bc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x26e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26e9c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e9c4: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x26E9C4u;
    {
        const bool branch_taken_0x26e9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e9c4) {
            ctx->pc = 0x26EA70u;
            goto label_26ea70;
        }
    }
    ctx->pc = 0x26E9CCu;
    // 0x26e9cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e9d0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x26e9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26e9d4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x26E9D4u;
    SET_GPR_U32(ctx, 31, 0x26E9DCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26E9D4u, 0x26E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9DCu;
label_26e9dc:
    // 0x26e9dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26e9dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26e9e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26e9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9e8: 0xc090f80  jal         func_243E00
    ctx->pc = 0x26E9E8u;
    SET_GPR_U32(ctx, 31, 0x26E9F0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x26E9E8u, 0x26E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9F0u;
label_26e9f0:
    // 0x26e9f0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x26e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26e9f4: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x26e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x26e9f8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x26e9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e9fc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x26e9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ea00: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x26ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea04: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x26ea04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x26ea08: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26ea08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26ea0c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26ea0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x26ea10: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x26ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ea14: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x26ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ea18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ea1c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x26ea1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x26ea20: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x26ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ea24: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x26ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ea28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ea2c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x26ea2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x26ea30: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x26ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ea34: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x26ea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ea38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ea3c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x26ea3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x26ea40: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x26ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x26ea44: 0xc104d24  jal         func_413490
    ctx->pc = 0x26EA44u;
    SET_GPR_U32(ctx, 31, 0x26EA4Cu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x26EA44u, 0x26EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA4Cu;
label_26ea4c:
    // 0x26ea4c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x26ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x26ea50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ea50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ea54: 0x0  nop
    ctx->pc = 0x26ea54u;
    // NOP
    // 0x26ea58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26ea58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ea5c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26EA5Cu;
    {
        const bool branch_taken_0x26ea5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ea5c) {
            ctx->pc = 0x26EA70u;
            goto label_26ea70;
        }
    }
    ctx->pc = 0x26EA64u;
    // 0x26ea64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26ea64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26EA68u;
    {
        const bool branch_taken_0x26ea68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ea68) {
            ctx->pc = 0x26EA88u;
            goto label_26ea88;
        }
    }
    ctx->pc = 0x26EA70u;
label_26ea70:
    // 0x26ea70: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26ea70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26ea74:
    // 0x26ea74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea78: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x26EA78u;
    SET_GPR_U32(ctx, 31, 0x26EA80u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x26EA78u, 0x26EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA80u;
label_26ea80:
    // 0x26ea80: 0x1602ffce  bne         $s0, $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x26EA80u;
    {
        const bool branch_taken_0x26ea80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ea80) {
            ctx->pc = 0x26E9BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e9bc;
        }
    }
    ctx->pc = 0x26EA88u;
label_26ea88:
    // 0x26ea88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26ea88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ea8c:
    // 0x26ea8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26ea8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26ea90: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26ea90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26ea94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26ea94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26ea98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26ea98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26ea9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26ea9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26eaa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26eaa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26eaa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26eaa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26eaa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26eaa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26eaac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26eaacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26eab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26eab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eab4: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x26eab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x26eab8: 0x3e00008  jr          $ra
    ctx->pc = 0x26EAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EAC0u;
}
