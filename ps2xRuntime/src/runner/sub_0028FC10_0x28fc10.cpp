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

// Function: sub_0028FC10
// Address: 0x28fc10 - 0x28fe20
void sub_0028FC10_0x28fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FC10_0x28fc10");
#endif

    switch (ctx->pc) {
        case 0x28fc80u: goto label_28fc80;
        case 0x28fc90u: goto label_28fc90;
        case 0x28fca8u: goto label_28fca8;
        case 0x28fcc0u: goto label_28fcc0;
        case 0x28fcd0u: goto label_28fcd0;
        case 0x28fcf0u: goto label_28fcf0;
        case 0x28fd00u: goto label_28fd00;
        case 0x28fd18u: goto label_28fd18;
        case 0x28fd30u: goto label_28fd30;
        case 0x28fd4cu: goto label_28fd4c;
        case 0x28fd5cu: goto label_28fd5c;
        case 0x28fd6cu: goto label_28fd6c;
        case 0x28fd84u: goto label_28fd84;
        case 0x28fd94u: goto label_28fd94;
        case 0x28fda4u: goto label_28fda4;
        case 0x28fdb4u: goto label_28fdb4;
        case 0x28fdd0u: goto label_28fdd0;
        case 0x28fdf0u: goto label_28fdf0;
        default: break;
    }

    ctx->pc = 0x28fc10u;

    // 0x28fc10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x28fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x28fc14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28fc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28fc18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28fc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28fc1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28fc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28fc20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28fc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28fc24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28fc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28fc28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28fc2c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x28fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x28fc30: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x28fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x28fc34: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x28fc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x28fc38: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x28fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x28fc3c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x28fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x28fc40: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x28fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x28fc44: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x28fc44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28fc48: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x28fc48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28fc4c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x28fc4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28fc50: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fc54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fc58: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28FC58u;
    {
        const bool branch_taken_0x28fc58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x28fc58) {
            ctx->pc = 0x28FCB0u;
            goto label_28fcb0;
        }
    }
    ctx->pc = 0x28FC60u;
    // 0x28fc60: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x28FC60u;
    {
        const bool branch_taken_0x28fc60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fc60) {
            ctx->pc = 0x28FD3Cu;
            goto label_28fd3c;
        }
    }
    ctx->pc = 0x28FC68u;
    // 0x28fc68: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x28FC68u;
    {
        const bool branch_taken_0x28fc68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fc68) {
            ctx->pc = 0x28FCB0u;
            goto label_28fcb0;
        }
    }
    ctx->pc = 0x28FC70u;
    // 0x28fc70: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x28fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x28fc74: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x28fc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28fc78: 0xc0a3c88  jal         func_28F220
    ctx->pc = 0x28FC78u;
    SET_GPR_U32(ctx, 31, 0x28FC80u);
    ctx->pc = 0x28F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F220u, 0x28FC78u, 0x28FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC80u;
label_28fc80:
    // 0x28fc80: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28fc80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28fc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc88: 0xc0a3c78  jal         func_28F1E0
    ctx->pc = 0x28FC88u;
    SET_GPR_U32(ctx, 31, 0x28FC90u);
    ctx->pc = 0x28F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F1E0u, 0x28FC88u, 0x28FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC90u;
label_28fc90:
    // 0x28fc90: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x28fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fc94: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x28fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28fc98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28fc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28fc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fca0: 0xc0a3c58  jal         func_28F160
    ctx->pc = 0x28FCA0u;
    SET_GPR_U32(ctx, 31, 0x28FCA8u);
    ctx->pc = 0x28F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F160u, 0x28FCA0u, 0x28FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCA8u;
label_28fca8:
    // 0x28fca8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28FCA8u;
    {
        const bool branch_taken_0x28fca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fca8) {
            ctx->pc = 0x28FD3Cu;
            goto label_28fd3c;
        }
    }
    ctx->pc = 0x28FCB0u;
label_28fcb0:
    // 0x28fcb0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fcb4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x28fcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28fcb8: 0xc0a3f90  jal         func_28FE40
    ctx->pc = 0x28FCB8u;
    SET_GPR_U32(ctx, 31, 0x28FCC0u);
    ctx->pc = 0x28FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE40u, 0x28FCB8u, 0x28FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCC0u;
label_28fcc0:
    // 0x28fcc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fcc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28fcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcc8: 0xc0a3c50  jal         func_28F140
    ctx->pc = 0x28FCC8u;
    SET_GPR_U32(ctx, 31, 0x28FCD0u);
    ctx->pc = 0x28F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F140u, 0x28FCC8u, 0x28FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCD0u;
label_28fcd0:
    // 0x28fcd0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28fcd4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fcd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fcdc: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28FCDCu;
    {
        const bool branch_taken_0x28fcdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28fcdc) {
            ctx->pc = 0x28FD0Cu;
            goto label_28fd0c;
        }
    }
    ctx->pc = 0x28FCE4u;
    // 0x28fce4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fce8: 0xc0a13d4  jal         func_284F50
    ctx->pc = 0x28FCE8u;
    SET_GPR_U32(ctx, 31, 0x28FCF0u);
    ctx->pc = 0x284F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F50u, 0x28FCE8u, 0x28FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCF0u;
label_28fcf0:
    // 0x28fcf0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28fcf4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fcf8: 0xc0a13c4  jal         func_284F10
    ctx->pc = 0x28FCF8u;
    SET_GPR_U32(ctx, 31, 0x28FD00u);
    ctx->pc = 0x284F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F10u, 0x28FCF8u, 0x28FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD00u;
label_28fd00:
    // 0x28fd00: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28fd04: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x28FD04u;
    {
        const bool branch_taken_0x28fd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fd04) {
            ctx->pc = 0x28FD88u;
            goto label_28fd88;
        }
    }
    ctx->pc = 0x28FD0Cu;
label_28fd0c:
    // 0x28fd0c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fd10: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x28FD10u;
    SET_GPR_U32(ctx, 31, 0x28FD18u);
    ctx->pc = 0x284F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F30u, 0x28FD10u, 0x28FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD18u;
label_28fd18:
    // 0x28fd18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fd1c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28FD1Cu;
    {
        const bool branch_taken_0x28fd1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28fd1c) {
            ctx->pc = 0x28FD88u;
            goto label_28fd88;
        }
    }
    ctx->pc = 0x28FD24u;
    // 0x28fd24: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fd28: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x28FD28u;
    SET_GPR_U32(ctx, 31, 0x28FD30u);
    ctx->pc = 0x284F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F30u, 0x28FD28u, 0x28FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD30u;
label_28fd30:
    // 0x28fd30: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28fd34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28FD34u;
    {
        const bool branch_taken_0x28fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fd34) {
            ctx->pc = 0x28FD88u;
            goto label_28fd88;
        }
    }
    ctx->pc = 0x28FD3Cu;
label_28fd3c:
    // 0x28fd3c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fd40: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x28fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28fd44: 0xc0a3f90  jal         func_28FE40
    ctx->pc = 0x28FD44u;
    SET_GPR_U32(ctx, 31, 0x28FD4Cu);
    ctx->pc = 0x28FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE40u, 0x28FD44u, 0x28FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD4Cu;
label_28fd4c:
    // 0x28fd4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fd4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28fd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd54: 0xc0a3c48  jal         func_28F120
    ctx->pc = 0x28FD54u;
    SET_GPR_U32(ctx, 31, 0x28FD5Cu);
    ctx->pc = 0x28F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F120u, 0x28FD54u, 0x28FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD5Cu;
label_28fd5c:
    // 0x28fd5c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28fd60: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fd64: 0xc0a13c4  jal         func_284F10
    ctx->pc = 0x28FD64u;
    SET_GPR_U32(ctx, 31, 0x28FD6Cu);
    ctx->pc = 0x284F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F10u, 0x28FD64u, 0x28FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD6Cu;
label_28fd6c:
    // 0x28fd6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fd70: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FD70u;
    {
        const bool branch_taken_0x28fd70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28fd70) {
            ctx->pc = 0x28FD88u;
            goto label_28fd88;
        }
    }
    ctx->pc = 0x28FD78u;
    // 0x28fd78: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fd7c: 0xc0a13c4  jal         func_284F10
    ctx->pc = 0x28FD7Cu;
    SET_GPR_U32(ctx, 31, 0x28FD84u);
    ctx->pc = 0x284F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F10u, 0x28FD7Cu, 0x28FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD84u;
label_28fd84:
    // 0x28fd84: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_28fd88:
    // 0x28fd88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd8c: 0xc0a3f88  jal         func_28FE20
    ctx->pc = 0x28FD8Cu;
    SET_GPR_U32(ctx, 31, 0x28FD94u);
    ctx->pc = 0x28FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE20u, 0x28FD8Cu, 0x28FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD94u;
label_28fd94:
    // 0x28fd94: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x28fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x28fd98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd9c: 0xc0a3c50  jal         func_28F140
    ctx->pc = 0x28FD9Cu;
    SET_GPR_U32(ctx, 31, 0x28FDA4u);
    ctx->pc = 0x28F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F140u, 0x28FD9Cu, 0x28FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDA4u;
label_28fda4:
    // 0x28fda4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28fda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdac: 0xc0a3c48  jal         func_28F120
    ctx->pc = 0x28FDACu;
    SET_GPR_U32(ctx, 31, 0x28FDB4u);
    ctx->pc = 0x28F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F120u, 0x28FDACu, 0x28FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDB4u;
label_28fdb4:
    // 0x28fdb4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28fdb8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fdbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fdc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdc4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x28fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28fdc8: 0xc042858  jal         func_10A160
    ctx->pc = 0x28FDC8u;
    SET_GPR_U32(ctx, 31, 0x28FDD0u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x28FDC8u, 0x28FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDD0u;
label_28fdd0:
    // 0x28fdd0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x28fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fdd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28fdd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28fddc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x28fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x28fde0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x28fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28fde4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fde8: 0xc0a3c3c  jal         func_28F0F0
    ctx->pc = 0x28FDE8u;
    SET_GPR_U32(ctx, 31, 0x28FDF0u);
    ctx->pc = 0x28F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F0F0u, 0x28FDE8u, 0x28FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDF0u;
label_28fdf0:
    // 0x28fdf0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28fdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28fdf4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28fdf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28fdf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28fdf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fdfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28fdfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fe00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28fe00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fe04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28fe04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fe08: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x28fe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28fe0c: 0x3e00008  jr          $ra
    ctx->pc = 0x28FE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FE14u;
    // 0x28fe14: 0x0  nop
    ctx->pc = 0x28fe14u;
    // NOP
    // 0x28fe18: 0x0  nop
    ctx->pc = 0x28fe18u;
    // NOP
    // 0x28fe1c: 0x0  nop
    ctx->pc = 0x28fe1cu;
    // NOP
    ctx->pc = 0x28fe20u;
}
