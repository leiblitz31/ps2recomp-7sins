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

// Function: sub_00283FC0
// Address: 0x283fc0 - 0x284400
void sub_00283FC0_0x283fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283FC0_0x283fc0");
#endif

    switch (ctx->pc) {
        case 0x284018u: goto label_284018;
        case 0x28403cu: goto label_28403c;
        case 0x284050u: goto label_284050;
        case 0x284064u: goto label_284064;
        case 0x284078u: goto label_284078;
        case 0x284094u: goto label_284094;
        case 0x2840b4u: goto label_2840b4;
        case 0x2840c8u: goto label_2840c8;
        case 0x2840e0u: goto label_2840e0;
        case 0x2840e8u: goto label_2840e8;
        case 0x284100u: goto label_284100;
        case 0x284118u: goto label_284118;
        case 0x28412cu: goto label_28412c;
        case 0x284148u: goto label_284148;
        case 0x284154u: goto label_284154;
        case 0x284164u: goto label_284164;
        case 0x28417cu: goto label_28417c;
        case 0x284194u: goto label_284194;
        case 0x2841a4u: goto label_2841a4;
        case 0x2841f4u: goto label_2841f4;
        case 0x284200u: goto label_284200;
        case 0x284210u: goto label_284210;
        case 0x284218u: goto label_284218;
        case 0x284230u: goto label_284230;
        case 0x284244u: goto label_284244;
        case 0x284278u: goto label_284278;
        case 0x284284u: goto label_284284;
        case 0x2842b4u: goto label_2842b4;
        case 0x2842d0u: goto label_2842d0;
        case 0x2842e8u: goto label_2842e8;
        case 0x2842f8u: goto label_2842f8;
        case 0x284308u: goto label_284308;
        case 0x28432cu: goto label_28432c;
        case 0x284354u: goto label_284354;
        case 0x284368u: goto label_284368;
        case 0x284388u: goto label_284388;
        case 0x28439cu: goto label_28439c;
        case 0x2843acu: goto label_2843ac;
        case 0x2843c0u: goto label_2843c0;
        default: break;
    }

    ctx->pc = 0x283fc0u;

    // 0x283fc0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x283fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x283fc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x283fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x283fc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x283fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x283fcc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x283fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x283fd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x283fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x283fd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x283fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x283fd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x283fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x283fdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x283fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x283fe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x283fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x283fe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283fec: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x283fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x283ff0: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x283ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x283ff4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x283ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x283ff8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x283ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x283ffc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x283ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284000: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x284000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284004: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x284004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x284008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28400c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x28400cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x284010: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x284010u;
    SET_GPR_U32(ctx, 31, 0x284018u);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x284010u, 0x284018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284018u;
label_284018:
    // 0x284018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28401c: 0x10100011  beq         $zero, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28401Cu;
    {
        const bool branch_taken_0x28401c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x28401c) {
            ctx->pc = 0x284064u;
            goto label_284064;
        }
    }
    ctx->pc = 0x284024u;
    // 0x284024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284028: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x284028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x28402c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28402cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284030: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284034: 0xc103322  jal         func_40CC88
    ctx->pc = 0x284034u;
    SET_GPR_U32(ctx, 31, 0x28403Cu);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x284034u, 0x28403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28403Cu;
label_28403c:
    // 0x28403c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28403Cu;
    {
        const bool branch_taken_0x28403c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28403c) {
            ctx->pc = 0x284054u;
            goto label_284054;
        }
    }
    ctx->pc = 0x284044u;
    // 0x284044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284048: 0xc103236  jal         func_40C8D8
    ctx->pc = 0x284048u;
    SET_GPR_U32(ctx, 31, 0x284050u);
    ctx->pc = 0x40C8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C8D8u, 0x284048u, 0x284050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284050u;
label_284050:
    // 0x284050: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x284050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284054:
    // 0x284054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28405c: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x28405Cu;
    SET_GPR_U32(ctx, 31, 0x284064u);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x28405Cu, 0x284064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284064u;
label_284064:
    // 0x284064: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x284064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x284068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28406c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x28406cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x284070: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x284070u;
    SET_GPR_U32(ctx, 31, 0x284078u);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x284070u, 0x284078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284078u;
label_284078:
    // 0x284078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28407c: 0x101000cb  beq         $zero, $s0, . + 4 + (0xCB << 2)
    ctx->pc = 0x28407Cu;
    {
        const bool branch_taken_0x28407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x28407c) {
            ctx->pc = 0x2843ACu;
            goto label_2843ac;
        }
    }
    ctx->pc = 0x284084u;
    // 0x284084: 0x14120035  bne         $zero, $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x284084u;
    {
        const bool branch_taken_0x284084 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 18));
        if (branch_taken_0x284084) {
            ctx->pc = 0x28415Cu;
            goto label_28415c;
        }
    }
    ctx->pc = 0x28408Cu;
    // 0x28408c: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x28408Cu;
    SET_GPR_U32(ctx, 31, 0x284094u);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x28408Cu, 0x284094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284094u;
label_284094:
    // 0x284094: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x284094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x284098: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x284098u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28409c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840a0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x2840a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2840a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2840a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2840a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840ac: 0xc103322  jal         func_40CC88
    ctx->pc = 0x2840ACu;
    SET_GPR_U32(ctx, 31, 0x2840B4u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x2840ACu, 0x2840B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840B4u;
label_2840b4:
    // 0x2840b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2840B4u;
    {
        const bool branch_taken_0x2840b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2840b4) {
            ctx->pc = 0x284100u;
            goto label_284100;
        }
    }
    ctx->pc = 0x2840BCu;
    // 0x2840bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2840bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840c0: 0xc0f5a88  jal         func_3D6A20
    ctx->pc = 0x2840C0u;
    SET_GPR_U32(ctx, 31, 0x2840C8u);
    ctx->pc = 0x3D6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6A20u, 0x2840C0u, 0x2840C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840C8u;
label_2840c8:
    // 0x2840c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2840c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840cc: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x2840CCu;
    {
        const bool branch_taken_0x2840cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2840cc) {
            ctx->pc = 0x284100u;
            goto label_284100;
        }
    }
    ctx->pc = 0x2840D4u;
    // 0x2840d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2840d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840d8: 0xc1082d0  jal         func_420B40
    ctx->pc = 0x2840D8u;
    SET_GPR_U32(ctx, 31, 0x2840E0u);
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x2840D8u, 0x2840E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840E0u;
label_2840e0:
    // 0x2840e0: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x2840E0u;
    SET_GPR_U32(ctx, 31, 0x2840E8u);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x2840E0u, 0x2840E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840E8u;
label_2840e8:
    // 0x2840e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2840e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840ec: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x2840ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x2840f0: 0x24a54400  addiu       $a1, $a1, 0x4400
    ctx->pc = 0x2840f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17408));
    // 0x2840f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2840f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840f8: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x2840F8u;
    SET_GPR_U32(ctx, 31, 0x284100u);
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x2840F8u, 0x284100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284100u;
label_284100:
    // 0x284100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284104: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x284104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x284108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x284108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28410c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28410cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284110: 0xc103322  jal         func_40CC88
    ctx->pc = 0x284110u;
    SET_GPR_U32(ctx, 31, 0x284118u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x284110u, 0x284118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284118u;
label_284118:
    // 0x284118: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284118u;
    {
        const bool branch_taken_0x284118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284118) {
            ctx->pc = 0x284134u;
            goto label_284134;
        }
    }
    ctx->pc = 0x284120u;
    // 0x284120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284124: 0xc0e1bb6  jal         func_386ED8
    ctx->pc = 0x284124u;
    SET_GPR_U32(ctx, 31, 0x28412Cu);
    ctx->pc = 0x386ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386ED8u, 0x284124u, 0x28412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28412Cu;
label_28412c:
    // 0x28412c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x28412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x284130: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x284130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_284134:
    // 0x284134: 0x12800099  beqz        $s4, . + 4 + (0x99 << 2)
    ctx->pc = 0x284134u;
    {
        const bool branch_taken_0x284134 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x284134) {
            ctx->pc = 0x28439Cu;
            goto label_28439c;
        }
    }
    ctx->pc = 0x28413Cu;
    // 0x28413c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x28413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x284140: 0xc1082d0  jal         func_420B40
    ctx->pc = 0x284140u;
    SET_GPR_U32(ctx, 31, 0x284148u);
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x284140u, 0x284148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284148u;
label_284148:
    // 0x284148: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x284148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28414c: 0xc1081de  jal         func_420778
    ctx->pc = 0x28414Cu;
    SET_GPR_U32(ctx, 31, 0x284154u);
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x28414Cu, 0x284154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284154u;
label_284154:
    // 0x284154: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x284154u;
    {
        const bool branch_taken_0x284154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284154) {
            ctx->pc = 0x28439Cu;
            goto label_28439c;
        }
    }
    ctx->pc = 0x28415Cu;
label_28415c:
    // 0x28415c: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x28415Cu;
    SET_GPR_U32(ctx, 31, 0x284164u);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x28415Cu, 0x284164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284164u;
label_284164:
    // 0x284164: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x284164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x284168: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x284168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28416c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28416cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x284170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284174: 0xc10329a  jal         func_40CA68
    ctx->pc = 0x284174u;
    SET_GPR_U32(ctx, 31, 0x28417Cu);
    ctx->pc = 0x40CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA68u, 0x284174u, 0x28417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28417Cu;
label_28417c:
    // 0x28417c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x28417cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x284180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284184: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x284184u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x284188: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x284188u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28418c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x28418Cu;
    {
        const bool branch_taken_0x28418c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28418c) {
            ctx->pc = 0x28436Cu;
            goto label_28436c;
        }
    }
    ctx->pc = 0x284194u;
label_284194:
    // 0x284194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x284194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284198: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x284198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28419c: 0xc10329c  jal         func_40CA70
    ctx->pc = 0x28419Cu;
    SET_GPR_U32(ctx, 31, 0x2841A4u);
    ctx->pc = 0x40CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA70u, 0x28419Cu, 0x2841A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841A4u;
label_2841a4:
    // 0x2841a4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2841a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2841a8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2841a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2841ac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2841acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2841b0: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2841B0u;
    {
        const bool branch_taken_0x2841b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2841b0) {
            ctx->pc = 0x28429Cu;
            goto label_28429c;
        }
    }
    ctx->pc = 0x2841B8u;
    // 0x2841b8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2841b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2841bc: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2841BCu;
    {
        const bool branch_taken_0x2841bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2841bc) {
            ctx->pc = 0x28424Cu;
            goto label_28424c;
        }
    }
    ctx->pc = 0x2841C4u;
    // 0x2841c4: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2841c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2841c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2841C8u;
    {
        const bool branch_taken_0x2841c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2841c8) {
            ctx->pc = 0x2841D8u;
            goto label_2841d8;
        }
    }
    ctx->pc = 0x2841D0u;
    // 0x2841d0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2841D0u;
    {
        const bool branch_taken_0x2841d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2841d0) {
            ctx->pc = 0x284368u;
            goto label_284368;
        }
    }
    ctx->pc = 0x2841D8u;
label_2841d8:
    // 0x2841d8: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x2841d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2841dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2841dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2841e0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x2841e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2841e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2841e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2841e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2841e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2841ec: 0xc103322  jal         func_40CC88
    ctx->pc = 0x2841ECu;
    SET_GPR_U32(ctx, 31, 0x2841F4u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x2841ECu, 0x2841F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841F4u;
label_2841f4:
    // 0x2841f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2841f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2841f8: 0xc0f5a88  jal         func_3D6A20
    ctx->pc = 0x2841F8u;
    SET_GPR_U32(ctx, 31, 0x284200u);
    ctx->pc = 0x3D6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6A20u, 0x2841F8u, 0x284200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284200u;
label_284200:
    // 0x284200: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x284200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284204: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x284204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284208: 0xc1082d0  jal         func_420B40
    ctx->pc = 0x284208u;
    SET_GPR_U32(ctx, 31, 0x284210u);
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x284208u, 0x284210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284210u;
label_284210:
    // 0x284210: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x284210u;
    SET_GPR_U32(ctx, 31, 0x284218u);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x284210u, 0x284218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284218u;
label_284218:
    // 0x284218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28421c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x28421cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x284220: 0x24a54400  addiu       $a1, $a1, 0x4400
    ctx->pc = 0x284220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17408));
    // 0x284224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x284224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284228: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x284228u;
    SET_GPR_U32(ctx, 31, 0x284230u);
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x284228u, 0x284230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284230u;
label_284230:
    // 0x284230: 0x1017004d  beq         $zero, $s7, . + 4 + (0x4D << 2)
    ctx->pc = 0x284230u;
    {
        const bool branch_taken_0x284230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x284230) {
            ctx->pc = 0x284368u;
            goto label_284368;
        }
    }
    ctx->pc = 0x284238u;
    // 0x284238: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x284238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28423c: 0xc1081de  jal         func_420778
    ctx->pc = 0x28423Cu;
    SET_GPR_U32(ctx, 31, 0x284244u);
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x28423Cu, 0x284244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284244u;
label_284244:
    // 0x284244: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x284244u;
    {
        const bool branch_taken_0x284244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284244) {
            ctx->pc = 0x284368u;
            goto label_284368;
        }
    }
    ctx->pc = 0x28424Cu;
label_28424c:
    // 0x28424c: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x28424cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x284250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284254: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x284254u;
    {
        const bool branch_taken_0x284254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284254) {
            ctx->pc = 0x284294u;
            goto label_284294;
        }
    }
    ctx->pc = 0x28425Cu;
    // 0x28425c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x28425cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284264: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x284264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x284268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x284268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28426c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28426cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284270: 0xc103322  jal         func_40CC88
    ctx->pc = 0x284270u;
    SET_GPR_U32(ctx, 31, 0x284278u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x284270u, 0x284278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284278u;
label_284278:
    // 0x284278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28427c: 0xc0e1bb6  jal         func_386ED8
    ctx->pc = 0x28427Cu;
    SET_GPR_U32(ctx, 31, 0x284284u);
    ctx->pc = 0x386ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386ED8u, 0x28427Cu, 0x284284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284284u;
label_284284:
    // 0x284284: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x284284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x284288: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x284288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28428c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x28428Cu;
    {
        const bool branch_taken_0x28428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28428c) {
            ctx->pc = 0x284368u;
            goto label_284368;
        }
    }
    ctx->pc = 0x284294u;
label_284294:
    // 0x284294: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x284294u;
    {
        const bool branch_taken_0x284294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284294) {
            ctx->pc = 0x284368u;
            goto label_284368;
        }
    }
    ctx->pc = 0x28429Cu;
label_28429c:
    // 0x28429c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2842a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2842a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2842a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2842a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842ac: 0xc103322  jal         func_40CC88
    ctx->pc = 0x2842ACu;
    SET_GPR_U32(ctx, 31, 0x2842B4u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x2842ACu, 0x2842B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842B4u;
label_2842b4:
    // 0x2842b4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2842b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2842b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2842b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2842bc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2842BCu;
    {
        const bool branch_taken_0x2842bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2842bc) {
            ctx->pc = 0x284368u;
            goto label_284368;
        }
    }
    ctx->pc = 0x2842C4u;
    // 0x2842c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2842c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842c8: 0xc0e237c  jal         func_388DF0
    ctx->pc = 0x2842C8u;
    SET_GPR_U32(ctx, 31, 0x2842D0u);
    ctx->pc = 0x388DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388DF0u, 0x2842C8u, 0x2842D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842D0u;
label_2842d0:
    // 0x2842d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2842d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842d4: 0x10110024  beq         $zero, $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2842D4u;
    {
        const bool branch_taken_0x2842d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x2842d4) {
            ctx->pc = 0x284368u;
            goto label_284368;
        }
    }
    ctx->pc = 0x2842DCu;
    // 0x2842dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2842dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842e0: 0xc0e2876  jal         func_38A1D8
    ctx->pc = 0x2842E0u;
    SET_GPR_U32(ctx, 31, 0x2842E8u);
    ctx->pc = 0x38A1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A1D8u, 0x2842E0u, 0x2842E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842E8u;
label_2842e8:
    // 0x2842e8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2842e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2842ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2842ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842f0: 0xc0e288e  jal         func_38A238
    ctx->pc = 0x2842F0u;
    SET_GPR_U32(ctx, 31, 0x2842F8u);
    ctx->pc = 0x38A238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A238u, 0x2842F0u, 0x2842F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842F8u;
label_2842f8:
    // 0x2842f8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2842f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2842fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2842fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284300: 0xc0e2882  jal         func_38A208
    ctx->pc = 0x284300u;
    SET_GPR_U32(ctx, 31, 0x284308u);
    ctx->pc = 0x38A208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A208u, 0x284300u, 0x284308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284308u;
label_284308:
    // 0x284308: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x284308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x28430c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x28430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x284310: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284310u;
    {
        const bool branch_taken_0x284310 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284310) {
            ctx->pc = 0x284334u;
            goto label_284334;
        }
    }
    ctx->pc = 0x284318u;
    // 0x284318: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x284318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28431c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28431cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284320: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x284320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284324: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x284324u;
    SET_GPR_U32(ctx, 31, 0x28432Cu);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x284324u, 0x28432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28432Cu;
label_28432c:
    // 0x28432c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28432Cu;
    {
        const bool branch_taken_0x28432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28432c) {
            ctx->pc = 0x284368u;
            goto label_284368;
        }
    }
    ctx->pc = 0x284334u;
label_284334:
    // 0x284334: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x284334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x284338: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x284338u;
    {
        const bool branch_taken_0x284338 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284338) {
            ctx->pc = 0x28435Cu;
            goto label_28435c;
        }
    }
    ctx->pc = 0x284340u;
    // 0x284340: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x284340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x284344: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x284344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284348: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x284348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28434c: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x28434Cu;
    SET_GPR_U32(ctx, 31, 0x284354u);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x28434Cu, 0x284354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284354u;
label_284354:
    // 0x284354: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x284354u;
    {
        const bool branch_taken_0x284354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284354) {
            ctx->pc = 0x284368u;
            goto label_284368;
        }
    }
    ctx->pc = 0x28435Cu;
label_28435c:
    // 0x28435c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28435cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284360: 0xc0e20da  jal         func_388368
    ctx->pc = 0x284360u;
    SET_GPR_U32(ctx, 31, 0x284368u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x284360u, 0x284368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284368u;
label_284368:
    // 0x284368: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x284368u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_28436c:
    // 0x28436c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x28436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x284370: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x284370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x284374: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x284374u;
    {
        const bool branch_taken_0x284374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284374) {
            ctx->pc = 0x284194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284194;
        }
    }
    ctx->pc = 0x28437Cu;
    // 0x28437c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x28437cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x284380: 0xc1082d0  jal         func_420B40
    ctx->pc = 0x284380u;
    SET_GPR_U32(ctx, 31, 0x284388u);
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x284380u, 0x284388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284388u;
label_284388:
    // 0x284388: 0x10130004  beq         $zero, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x284388u;
    {
        const bool branch_taken_0x284388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x284388) {
            ctx->pc = 0x28439Cu;
            goto label_28439c;
        }
    }
    ctx->pc = 0x284390u;
    // 0x284390: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x284390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284394: 0xc1081de  jal         func_420778
    ctx->pc = 0x284394u;
    SET_GPR_U32(ctx, 31, 0x28439Cu);
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x284394u, 0x28439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28439Cu;
label_28439c:
    // 0x28439c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2843a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843a4: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x2843A4u;
    SET_GPR_U32(ctx, 31, 0x2843ACu);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x2843A4u, 0x2843ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843ACu;
label_2843ac:
    // 0x2843ac: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2843ACu;
    {
        const bool branch_taken_0x2843ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2843ac) {
            ctx->pc = 0x2843C0u;
            goto label_2843c0;
        }
    }
    ctx->pc = 0x2843B4u;
    // 0x2843b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2843b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843b8: 0xc103290  jal         func_40CA40
    ctx->pc = 0x2843B8u;
    SET_GPR_U32(ctx, 31, 0x2843C0u);
    ctx->pc = 0x40CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA40u, 0x2843B8u, 0x2843C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843C0u;
label_2843c0:
    // 0x2843c0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2843c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2843c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2843c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2843c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2843c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2843cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2843ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2843d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2843d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2843d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2843d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2843d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2843d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2843dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2843dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2843e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2843e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2843e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2843e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2843e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2843e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2843ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2843ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2843f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2843f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2843f4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2843f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2843f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2843F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2843F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284400u;
}
