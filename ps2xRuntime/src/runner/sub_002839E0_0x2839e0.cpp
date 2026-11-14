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

// Function: sub_002839E0
// Address: 0x2839e0 - 0x283bf0
void sub_002839E0_0x2839e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002839E0_0x2839e0");
#endif

    switch (ctx->pc) {
        case 0x283a50u: goto label_283a50;
        case 0x283a60u: goto label_283a60;
        case 0x283a78u: goto label_283a78;
        case 0x283a90u: goto label_283a90;
        case 0x283aa0u: goto label_283aa0;
        case 0x283ac0u: goto label_283ac0;
        case 0x283ad0u: goto label_283ad0;
        case 0x283ae8u: goto label_283ae8;
        case 0x283b00u: goto label_283b00;
        case 0x283b1cu: goto label_283b1c;
        case 0x283b2cu: goto label_283b2c;
        case 0x283b3cu: goto label_283b3c;
        case 0x283b54u: goto label_283b54;
        case 0x283b64u: goto label_283b64;
        case 0x283b74u: goto label_283b74;
        case 0x283b84u: goto label_283b84;
        case 0x283ba0u: goto label_283ba0;
        case 0x283bc0u: goto label_283bc0;
        default: break;
    }

    ctx->pc = 0x2839e0u;

    // 0x2839e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2839e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2839e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2839e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2839e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2839e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2839ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2839ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2839f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2839f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2839f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2839f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2839f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2839f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2839fc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2839fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x283a00: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x283a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x283a04: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x283a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x283a08: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x283a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x283a0c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x283a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x283a10: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x283a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x283a14: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x283a14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x283a18: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x283a18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x283a1c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x283a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x283a20: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x283a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283a24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283a28: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x283A28u;
    {
        const bool branch_taken_0x283a28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x283a28) {
            ctx->pc = 0x283A80u;
            goto label_283a80;
        }
    }
    ctx->pc = 0x283A30u;
    // 0x283a30: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x283A30u;
    {
        const bool branch_taken_0x283a30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x283a30) {
            ctx->pc = 0x283B0Cu;
            goto label_283b0c;
        }
    }
    ctx->pc = 0x283A38u;
    // 0x283a38: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x283A38u;
    {
        const bool branch_taken_0x283a38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x283a38) {
            ctx->pc = 0x283A80u;
            goto label_283a80;
        }
    }
    ctx->pc = 0x283A40u;
    // 0x283a40: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x283a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x283a44: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x283a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x283a48: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x283A48u;
    SET_GPR_U32(ctx, 31, 0x283A50u);
    ctx->pc = 0x283190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283190u, 0x283A48u, 0x283A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A50u;
label_283a50:
    // 0x283a50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x283a50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a58: 0xc0a0c54  jal         func_283150
    ctx->pc = 0x283A58u;
    SET_GPR_U32(ctx, 31, 0x283A60u);
    ctx->pc = 0x283150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283150u, 0x283A58u, 0x283A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A60u;
label_283a60:
    // 0x283a60: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x283a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283a64: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x283a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x283a68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x283a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x283a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a70: 0xc0a0c48  jal         func_283120
    ctx->pc = 0x283A70u;
    SET_GPR_U32(ctx, 31, 0x283A78u);
    ctx->pc = 0x283120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283120u, 0x283A70u, 0x283A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A78u;
label_283a78:
    // 0x283a78: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x283A78u;
    {
        const bool branch_taken_0x283a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283a78) {
            ctx->pc = 0x283B0Cu;
            goto label_283b0c;
        }
    }
    ctx->pc = 0x283A80u;
label_283a80:
    // 0x283a80: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283a84: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x283a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x283a88: 0xc0a0f04  jal         func_283C10
    ctx->pc = 0x283A88u;
    SET_GPR_U32(ctx, 31, 0x283A90u);
    ctx->pc = 0x283C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283C10u, 0x283A88u, 0x283A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A90u;
label_283a90:
    // 0x283a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x283a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a98: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x283A98u;
    SET_GPR_U32(ctx, 31, 0x283AA0u);
    ctx->pc = 0x283100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283100u, 0x283A98u, 0x283AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AA0u;
label_283aa0:
    // 0x283aa0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283aa4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x283aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283aa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283aac: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x283AACu;
    {
        const bool branch_taken_0x283aac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x283aac) {
            ctx->pc = 0x283ADCu;
            goto label_283adc;
        }
    }
    ctx->pc = 0x283AB4u;
    // 0x283ab4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283ab8: 0xc0a01c8  jal         func_280720
    ctx->pc = 0x283AB8u;
    SET_GPR_U32(ctx, 31, 0x283AC0u);
    ctx->pc = 0x280720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280720u, 0x283AB8u, 0x283AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AC0u;
label_283ac0:
    // 0x283ac0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283ac4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283ac8: 0xc0a01b8  jal         func_2806E0
    ctx->pc = 0x283AC8u;
    SET_GPR_U32(ctx, 31, 0x283AD0u);
    ctx->pc = 0x2806E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2806E0u, 0x283AC8u, 0x283AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AD0u;
label_283ad0:
    // 0x283ad0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283ad4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x283AD4u;
    {
        const bool branch_taken_0x283ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ad4) {
            ctx->pc = 0x283B58u;
            goto label_283b58;
        }
    }
    ctx->pc = 0x283ADCu;
label_283adc:
    // 0x283adc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283ae0: 0xc0a01c0  jal         func_280700
    ctx->pc = 0x283AE0u;
    SET_GPR_U32(ctx, 31, 0x283AE8u);
    ctx->pc = 0x280700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280700u, 0x283AE0u, 0x283AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AE8u;
label_283ae8:
    // 0x283ae8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283aec: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x283AECu;
    {
        const bool branch_taken_0x283aec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x283aec) {
            ctx->pc = 0x283B58u;
            goto label_283b58;
        }
    }
    ctx->pc = 0x283AF4u;
    // 0x283af4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283af8: 0xc0a01c0  jal         func_280700
    ctx->pc = 0x283AF8u;
    SET_GPR_U32(ctx, 31, 0x283B00u);
    ctx->pc = 0x280700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280700u, 0x283AF8u, 0x283B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B00u;
label_283b00:
    // 0x283b00: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283b04: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x283B04u;
    {
        const bool branch_taken_0x283b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b04) {
            ctx->pc = 0x283B58u;
            goto label_283b58;
        }
    }
    ctx->pc = 0x283B0Cu;
label_283b0c:
    // 0x283b0c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283b10: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x283b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x283b14: 0xc0a0f04  jal         func_283C10
    ctx->pc = 0x283B14u;
    SET_GPR_U32(ctx, 31, 0x283B1Cu);
    ctx->pc = 0x283C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283C10u, 0x283B14u, 0x283B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B1Cu;
label_283b1c:
    // 0x283b1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x283b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b24: 0xc0a0c38  jal         func_2830E0
    ctx->pc = 0x283B24u;
    SET_GPR_U32(ctx, 31, 0x283B2Cu);
    ctx->pc = 0x2830E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830E0u, 0x283B24u, 0x283B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B2Cu;
label_283b2c:
    // 0x283b2c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283b30: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283b34: 0xc0a01b8  jal         func_2806E0
    ctx->pc = 0x283B34u;
    SET_GPR_U32(ctx, 31, 0x283B3Cu);
    ctx->pc = 0x2806E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2806E0u, 0x283B34u, 0x283B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B3Cu;
label_283b3c:
    // 0x283b3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283b40: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283B40u;
    {
        const bool branch_taken_0x283b40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x283b40) {
            ctx->pc = 0x283B58u;
            goto label_283b58;
        }
    }
    ctx->pc = 0x283B48u;
    // 0x283b48: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283b4c: 0xc0a01b8  jal         func_2806E0
    ctx->pc = 0x283B4Cu;
    SET_GPR_U32(ctx, 31, 0x283B54u);
    ctx->pc = 0x2806E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2806E0u, 0x283B4Cu, 0x283B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B54u;
label_283b54:
    // 0x283b54: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_283b58:
    // 0x283b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b5c: 0xc0a0efc  jal         func_283BF0
    ctx->pc = 0x283B5Cu;
    SET_GPR_U32(ctx, 31, 0x283B64u);
    ctx->pc = 0x283BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283BF0u, 0x283B5Cu, 0x283B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B64u;
label_283b64:
    // 0x283b64: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x283b64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x283b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b6c: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x283B6Cu;
    SET_GPR_U32(ctx, 31, 0x283B74u);
    ctx->pc = 0x283100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283100u, 0x283B6Cu, 0x283B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B74u;
label_283b74:
    // 0x283b74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x283b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x283b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b7c: 0xc0a0c38  jal         func_2830E0
    ctx->pc = 0x283B7Cu;
    SET_GPR_U32(ctx, 31, 0x283B84u);
    ctx->pc = 0x2830E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830E0u, 0x283B7Cu, 0x283B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B84u;
label_283b84:
    // 0x283b84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x283b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x283b88: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x283b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283b8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b94: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x283b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x283b98: 0xc042858  jal         func_10A160
    ctx->pc = 0x283B98u;
    SET_GPR_U32(ctx, 31, 0x283BA0u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x283B98u, 0x283BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283BA0u;
label_283ba0:
    // 0x283ba0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x283ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283ba4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x283ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x283ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x283ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283bac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x283bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x283bb0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x283bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x283bb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x283bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283bb8: 0xc0a0c2c  jal         func_2830B0
    ctx->pc = 0x283BB8u;
    SET_GPR_U32(ctx, 31, 0x283BC0u);
    ctx->pc = 0x2830B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830B0u, 0x283BB8u, 0x283BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283BC0u;
label_283bc0:
    // 0x283bc0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x283bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x283bc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x283bc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283bc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x283bc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283bcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283bd8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x283bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x283bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x283BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283BE4u;
    // 0x283be4: 0x0  nop
    ctx->pc = 0x283be4u;
    // NOP
    // 0x283be8: 0x0  nop
    ctx->pc = 0x283be8u;
    // NOP
    // 0x283bec: 0x0  nop
    ctx->pc = 0x283becu;
    // NOP
    ctx->pc = 0x283bf0u;
}
