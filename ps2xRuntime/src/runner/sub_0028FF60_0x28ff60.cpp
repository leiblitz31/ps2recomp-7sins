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

// Function: sub_0028FF60
// Address: 0x28ff60 - 0x290170
void sub_0028FF60_0x28ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FF60_0x28ff60");
#endif

    switch (ctx->pc) {
        case 0x28ffd0u: goto label_28ffd0;
        case 0x28ffe0u: goto label_28ffe0;
        case 0x28fff8u: goto label_28fff8;
        case 0x290010u: goto label_290010;
        case 0x290020u: goto label_290020;
        case 0x290040u: goto label_290040;
        case 0x290050u: goto label_290050;
        case 0x290068u: goto label_290068;
        case 0x290080u: goto label_290080;
        case 0x29009cu: goto label_29009c;
        case 0x2900acu: goto label_2900ac;
        case 0x2900bcu: goto label_2900bc;
        case 0x2900d4u: goto label_2900d4;
        case 0x2900e4u: goto label_2900e4;
        case 0x2900f4u: goto label_2900f4;
        case 0x290104u: goto label_290104;
        case 0x290120u: goto label_290120;
        case 0x290140u: goto label_290140;
        default: break;
    }

    ctx->pc = 0x28ff60u;

    // 0x28ff60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x28ff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x28ff64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28ff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28ff68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28ff6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28ff70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28ff74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28ff78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28ff7c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x28ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x28ff80: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x28ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x28ff84: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x28ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x28ff88: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x28ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x28ff8c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x28ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x28ff90: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x28ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x28ff94: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x28ff94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28ff98: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x28ff98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ff9c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x28ff9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28ffa0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ffa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ffa8: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28FFA8u;
    {
        const bool branch_taken_0x28ffa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ffa8) {
            ctx->pc = 0x290000u;
            goto label_290000;
        }
    }
    ctx->pc = 0x28FFB0u;
    // 0x28ffb0: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x28FFB0u;
    {
        const bool branch_taken_0x28ffb0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ffb0) {
            ctx->pc = 0x29008Cu;
            goto label_29008c;
        }
    }
    ctx->pc = 0x28FFB8u;
    // 0x28ffb8: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x28FFB8u;
    {
        const bool branch_taken_0x28ffb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ffb8) {
            ctx->pc = 0x290000u;
            goto label_290000;
        }
    }
    ctx->pc = 0x28FFC0u;
    // 0x28ffc0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x28ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x28ffc4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x28ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28ffc8: 0xc0a3dcc  jal         func_28F730
    ctx->pc = 0x28FFC8u;
    SET_GPR_U32(ctx, 31, 0x28FFD0u);
    ctx->pc = 0x28F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F730u, 0x28FFC8u, 0x28FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFD0u;
label_28ffd0:
    // 0x28ffd0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28ffd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffd8: 0xc0a3dbc  jal         func_28F6F0
    ctx->pc = 0x28FFD8u;
    SET_GPR_U32(ctx, 31, 0x28FFE0u);
    ctx->pc = 0x28F6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F6F0u, 0x28FFD8u, 0x28FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFE0u;
label_28ffe0:
    // 0x28ffe0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x28ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ffe4: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x28ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28ffe8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28ffe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ffecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fff0: 0xc0a3dac  jal         func_28F6B0
    ctx->pc = 0x28FFF0u;
    SET_GPR_U32(ctx, 31, 0x28FFF8u);
    ctx->pc = 0x28F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F6B0u, 0x28FFF0u, 0x28FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFF8u;
label_28fff8:
    // 0x28fff8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28FFF8u;
    {
        const bool branch_taken_0x28fff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fff8) {
            ctx->pc = 0x29008Cu;
            goto label_29008c;
        }
    }
    ctx->pc = 0x290000u;
label_290000:
    // 0x290000: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x290000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290004: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x290004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x290008: 0xc0a4064  jal         func_290190
    ctx->pc = 0x290008u;
    SET_GPR_U32(ctx, 31, 0x290010u);
    ctx->pc = 0x290190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290190u, 0x290008u, 0x290010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290010u;
label_290010:
    // 0x290010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290018: 0xc0a3da4  jal         func_28F690
    ctx->pc = 0x290018u;
    SET_GPR_U32(ctx, 31, 0x290020u);
    ctx->pc = 0x28F690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F690u, 0x290018u, 0x290020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290020u;
label_290020:
    // 0x290020: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x290020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x290024: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x290024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x290028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29002c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29002Cu;
    {
        const bool branch_taken_0x29002c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x29002c) {
            ctx->pc = 0x29005Cu;
            goto label_29005c;
        }
    }
    ctx->pc = 0x290034u;
    // 0x290034: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x290034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290038: 0xc0a2aa4  jal         func_28AA90
    ctx->pc = 0x290038u;
    SET_GPR_U32(ctx, 31, 0x290040u);
    ctx->pc = 0x28AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA90u, 0x290038u, 0x290040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290040u;
label_290040:
    // 0x290040: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x290040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x290044: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x290044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290048: 0xc0a2a94  jal         func_28AA50
    ctx->pc = 0x290048u;
    SET_GPR_U32(ctx, 31, 0x290050u);
    ctx->pc = 0x28AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA50u, 0x290048u, 0x290050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290050u;
label_290050:
    // 0x290050: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x290050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x290054: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x290054u;
    {
        const bool branch_taken_0x290054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290054) {
            ctx->pc = 0x2900D8u;
            goto label_2900d8;
        }
    }
    ctx->pc = 0x29005Cu;
label_29005c:
    // 0x29005c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x29005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290060: 0xc0a2a9c  jal         func_28AA70
    ctx->pc = 0x290060u;
    SET_GPR_U32(ctx, 31, 0x290068u);
    ctx->pc = 0x28AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA70u, 0x290060u, 0x290068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290068u;
label_290068:
    // 0x290068: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x290068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29006c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x29006Cu;
    {
        const bool branch_taken_0x29006c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x29006c) {
            ctx->pc = 0x2900D8u;
            goto label_2900d8;
        }
    }
    ctx->pc = 0x290074u;
    // 0x290074: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x290074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290078: 0xc0a2a9c  jal         func_28AA70
    ctx->pc = 0x290078u;
    SET_GPR_U32(ctx, 31, 0x290080u);
    ctx->pc = 0x28AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA70u, 0x290078u, 0x290080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290080u;
label_290080:
    // 0x290080: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x290080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x290084: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x290084u;
    {
        const bool branch_taken_0x290084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290084) {
            ctx->pc = 0x2900D8u;
            goto label_2900d8;
        }
    }
    ctx->pc = 0x29008Cu;
label_29008c:
    // 0x29008c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x29008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290090: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x290090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x290094: 0xc0a4064  jal         func_290190
    ctx->pc = 0x290094u;
    SET_GPR_U32(ctx, 31, 0x29009Cu);
    ctx->pc = 0x290190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290190u, 0x290094u, 0x29009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29009Cu;
label_29009c:
    // 0x29009c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29009cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2900a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900a4: 0xc0a3d9c  jal         func_28F670
    ctx->pc = 0x2900A4u;
    SET_GPR_U32(ctx, 31, 0x2900ACu);
    ctx->pc = 0x28F670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F670u, 0x2900A4u, 0x2900ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900ACu;
label_2900ac:
    // 0x2900ac: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2900acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2900b0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2900b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2900b4: 0xc0a2a94  jal         func_28AA50
    ctx->pc = 0x2900B4u;
    SET_GPR_U32(ctx, 31, 0x2900BCu);
    ctx->pc = 0x28AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA50u, 0x2900B4u, 0x2900BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900BCu;
label_2900bc:
    // 0x2900bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2900bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2900c0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2900C0u;
    {
        const bool branch_taken_0x2900c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2900c0) {
            ctx->pc = 0x2900D8u;
            goto label_2900d8;
        }
    }
    ctx->pc = 0x2900C8u;
    // 0x2900c8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2900c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2900cc: 0xc0a2a94  jal         func_28AA50
    ctx->pc = 0x2900CCu;
    SET_GPR_U32(ctx, 31, 0x2900D4u);
    ctx->pc = 0x28AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA50u, 0x2900CCu, 0x2900D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900D4u;
label_2900d4:
    // 0x2900d4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2900d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2900d8:
    // 0x2900d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2900d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900dc: 0xc0a405c  jal         func_290170
    ctx->pc = 0x2900DCu;
    SET_GPR_U32(ctx, 31, 0x2900E4u);
    ctx->pc = 0x290170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290170u, 0x2900DCu, 0x2900E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900E4u;
label_2900e4:
    // 0x2900e4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2900e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2900e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2900e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900ec: 0xc0a3da4  jal         func_28F690
    ctx->pc = 0x2900ECu;
    SET_GPR_U32(ctx, 31, 0x2900F4u);
    ctx->pc = 0x28F690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F690u, 0x2900ECu, 0x2900F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900F4u;
label_2900f4:
    // 0x2900f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2900f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2900f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2900f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900fc: 0xc0a3d9c  jal         func_28F670
    ctx->pc = 0x2900FCu;
    SET_GPR_U32(ctx, 31, 0x290104u);
    ctx->pc = 0x28F670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F670u, 0x2900FCu, 0x290104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290104u;
label_290104:
    // 0x290104: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x290104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x290108: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x290108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29010c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290114: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x290114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x290118: 0xc042858  jal         func_10A160
    ctx->pc = 0x290118u;
    SET_GPR_U32(ctx, 31, 0x290120u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x290118u, 0x290120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290120u;
label_290120:
    // 0x290120: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x290120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290124: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290128: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x290128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29012c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x29012cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x290130: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x290130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x290134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x290134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290138: 0xc0a3d90  jal         func_28F640
    ctx->pc = 0x290138u;
    SET_GPR_U32(ctx, 31, 0x290140u);
    ctx->pc = 0x28F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F640u, 0x290138u, 0x290140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290140u;
label_290140:
    // 0x290140: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x290140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290144: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x290144u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290148: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x290148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29014c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29014cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290150: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290158: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x290158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29015c: 0x3e00008  jr          $ra
    ctx->pc = 0x29015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29015Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290164u;
    // 0x290164: 0x0  nop
    ctx->pc = 0x290164u;
    // NOP
    // 0x290168: 0x0  nop
    ctx->pc = 0x290168u;
    // NOP
    // 0x29016c: 0x0  nop
    ctx->pc = 0x29016cu;
    // NOP
    ctx->pc = 0x290170u;
}
