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

// Function: sub_00155CB0
// Address: 0x155cb0 - 0x155ec0
void sub_00155CB0_0x155cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155CB0_0x155cb0");
#endif

    switch (ctx->pc) {
        case 0x155d20u: goto label_155d20;
        case 0x155d30u: goto label_155d30;
        case 0x155d48u: goto label_155d48;
        case 0x155d60u: goto label_155d60;
        case 0x155d70u: goto label_155d70;
        case 0x155d90u: goto label_155d90;
        case 0x155da0u: goto label_155da0;
        case 0x155db8u: goto label_155db8;
        case 0x155dd0u: goto label_155dd0;
        case 0x155decu: goto label_155dec;
        case 0x155dfcu: goto label_155dfc;
        case 0x155e0cu: goto label_155e0c;
        case 0x155e24u: goto label_155e24;
        case 0x155e34u: goto label_155e34;
        case 0x155e44u: goto label_155e44;
        case 0x155e54u: goto label_155e54;
        case 0x155e70u: goto label_155e70;
        case 0x155e90u: goto label_155e90;
        default: break;
    }

    ctx->pc = 0x155cb0u;

    // 0x155cb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x155cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x155cb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x155cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x155cb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x155cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x155cbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x155cc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x155cc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155ccc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x155cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x155cd0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x155cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x155cd4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x155cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x155cd8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x155cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x155cdc: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x155cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x155ce0: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x155ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x155ce4: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x155ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x155ce8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x155ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x155cec: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x155cecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x155cf0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x155cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155cf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x155cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155cf8: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x155CF8u;
    {
        const bool branch_taken_0x155cf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x155cf8) {
            ctx->pc = 0x155D50u;
            goto label_155d50;
        }
    }
    ctx->pc = 0x155D00u;
    // 0x155d00: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x155D00u;
    {
        const bool branch_taken_0x155d00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x155d00) {
            ctx->pc = 0x155DDCu;
            goto label_155ddc;
        }
    }
    ctx->pc = 0x155D08u;
    // 0x155d08: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x155D08u;
    {
        const bool branch_taken_0x155d08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x155d08) {
            ctx->pc = 0x155D50u;
            goto label_155d50;
        }
    }
    ctx->pc = 0x155D10u;
    // 0x155d10: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x155d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x155d14: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x155d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x155d18: 0xc0556f8  jal         func_155BE0
    ctx->pc = 0x155D18u;
    SET_GPR_U32(ctx, 31, 0x155D20u);
    ctx->pc = 0x155BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BE0u, 0x155D18u, 0x155D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D20u;
label_155d20:
    // 0x155d20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x155d20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d28: 0xc0556e8  jal         func_155BA0
    ctx->pc = 0x155D28u;
    SET_GPR_U32(ctx, 31, 0x155D30u);
    ctx->pc = 0x155BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BA0u, 0x155D28u, 0x155D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D30u;
label_155d30:
    // 0x155d30: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x155d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155d34: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x155d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x155d38: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x155d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155d3c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x155d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155d40: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x155D40u;
    SET_GPR_U32(ctx, 31, 0x155D48u);
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x155D40u, 0x155D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D48u;
label_155d48:
    // 0x155d48: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x155D48u;
    {
        const bool branch_taken_0x155d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155d48) {
            ctx->pc = 0x155DDCu;
            goto label_155ddc;
        }
    }
    ctx->pc = 0x155D50u;
label_155d50:
    // 0x155d50: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x155d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155d54: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x155d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x155d58: 0xc0557b8  jal         func_155EE0
    ctx->pc = 0x155D58u;
    SET_GPR_U32(ctx, 31, 0x155D60u);
    ctx->pc = 0x155EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155EE0u, 0x155D58u, 0x155D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D60u;
label_155d60:
    // 0x155d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x155d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d68: 0xc0556cc  jal         func_155B30
    ctx->pc = 0x155D68u;
    SET_GPR_U32(ctx, 31, 0x155D70u);
    ctx->pc = 0x155B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B30u, 0x155D68u, 0x155D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D70u;
label_155d70:
    // 0x155d70: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x155d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x155d74: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x155d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155d78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x155d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155d7c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x155D7Cu;
    {
        const bool branch_taken_0x155d7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x155d7c) {
            ctx->pc = 0x155DACu;
            goto label_155dac;
        }
    }
    ctx->pc = 0x155D84u;
    // 0x155d84: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x155d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155d88: 0xc054e6c  jal         func_1539B0
    ctx->pc = 0x155D88u;
    SET_GPR_U32(ctx, 31, 0x155D90u);
    ctx->pc = 0x1539B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539B0u, 0x155D88u, 0x155D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D90u;
label_155d90:
    // 0x155d90: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x155d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x155d94: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x155d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155d98: 0xc054e5c  jal         func_153970
    ctx->pc = 0x155D98u;
    SET_GPR_U32(ctx, 31, 0x155DA0u);
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x155D98u, 0x155DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DA0u;
label_155da0:
    // 0x155da0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x155da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x155da4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x155DA4u;
    {
        const bool branch_taken_0x155da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155da4) {
            ctx->pc = 0x155E28u;
            goto label_155e28;
        }
    }
    ctx->pc = 0x155DACu;
label_155dac:
    // 0x155dac: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x155dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155db0: 0xc054e64  jal         func_153990
    ctx->pc = 0x155DB0u;
    SET_GPR_U32(ctx, 31, 0x155DB8u);
    ctx->pc = 0x153990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153990u, 0x155DB0u, 0x155DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DB8u;
label_155db8:
    // 0x155db8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x155db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155dbc: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x155DBCu;
    {
        const bool branch_taken_0x155dbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x155dbc) {
            ctx->pc = 0x155E28u;
            goto label_155e28;
        }
    }
    ctx->pc = 0x155DC4u;
    // 0x155dc4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x155dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155dc8: 0xc054e64  jal         func_153990
    ctx->pc = 0x155DC8u;
    SET_GPR_U32(ctx, 31, 0x155DD0u);
    ctx->pc = 0x153990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153990u, 0x155DC8u, 0x155DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DD0u;
label_155dd0:
    // 0x155dd0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x155dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x155dd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x155DD4u;
    {
        const bool branch_taken_0x155dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155dd4) {
            ctx->pc = 0x155E28u;
            goto label_155e28;
        }
    }
    ctx->pc = 0x155DDCu;
label_155ddc:
    // 0x155ddc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x155ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155de0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x155de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x155de4: 0xc0557b8  jal         func_155EE0
    ctx->pc = 0x155DE4u;
    SET_GPR_U32(ctx, 31, 0x155DECu);
    ctx->pc = 0x155EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155EE0u, 0x155DE4u, 0x155DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DECu;
label_155dec:
    // 0x155dec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x155decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155df4: 0xc0556c4  jal         func_155B10
    ctx->pc = 0x155DF4u;
    SET_GPR_U32(ctx, 31, 0x155DFCu);
    ctx->pc = 0x155B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B10u, 0x155DF4u, 0x155DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DFCu;
label_155dfc:
    // 0x155dfc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x155dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x155e00: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x155e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155e04: 0xc054e5c  jal         func_153970
    ctx->pc = 0x155E04u;
    SET_GPR_U32(ctx, 31, 0x155E0Cu);
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x155E04u, 0x155E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E0Cu;
label_155e0c:
    // 0x155e0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x155e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155e10: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155E10u;
    {
        const bool branch_taken_0x155e10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x155e10) {
            ctx->pc = 0x155E28u;
            goto label_155e28;
        }
    }
    ctx->pc = 0x155E18u;
    // 0x155e18: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x155e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155e1c: 0xc054e5c  jal         func_153970
    ctx->pc = 0x155E1Cu;
    SET_GPR_U32(ctx, 31, 0x155E24u);
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x155E1Cu, 0x155E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E24u;
label_155e24:
    // 0x155e24: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x155e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_155e28:
    // 0x155e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e2c: 0xc0557b0  jal         func_155EC0
    ctx->pc = 0x155E2Cu;
    SET_GPR_U32(ctx, 31, 0x155E34u);
    ctx->pc = 0x155EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155EC0u, 0x155E2Cu, 0x155E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E34u;
label_155e34:
    // 0x155e34: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x155e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x155e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e3c: 0xc0556cc  jal         func_155B30
    ctx->pc = 0x155E3Cu;
    SET_GPR_U32(ctx, 31, 0x155E44u);
    ctx->pc = 0x155B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B30u, 0x155E3Cu, 0x155E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E44u;
label_155e44:
    // 0x155e44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x155e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x155e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e4c: 0xc0556c4  jal         func_155B10
    ctx->pc = 0x155E4Cu;
    SET_GPR_U32(ctx, 31, 0x155E54u);
    ctx->pc = 0x155B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B10u, 0x155E4Cu, 0x155E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E54u;
label_155e54:
    // 0x155e54: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x155e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x155e58: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x155e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155e5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x155e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e64: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x155e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x155e68: 0xc042858  jal         func_10A160
    ctx->pc = 0x155E68u;
    SET_GPR_U32(ctx, 31, 0x155E70u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x155E68u, 0x155E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E70u;
label_155e70:
    // 0x155e70: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x155e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155e74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x155e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x155e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x155e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x155e7c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x155e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x155e80: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x155e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x155e84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e88: 0xc0556b8  jal         func_155AE0
    ctx->pc = 0x155E88u;
    SET_GPR_U32(ctx, 31, 0x155E90u);
    ctx->pc = 0x155AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AE0u, 0x155E88u, 0x155E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E90u;
label_155e90:
    // 0x155e90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x155e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155e94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155e94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155e98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155e98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155e9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155ea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155ea8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x155ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x155eac: 0x3e00008  jr          $ra
    ctx->pc = 0x155EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155EB4u;
    // 0x155eb4: 0x0  nop
    ctx->pc = 0x155eb4u;
    // NOP
    // 0x155eb8: 0x0  nop
    ctx->pc = 0x155eb8u;
    // NOP
    // 0x155ebc: 0x0  nop
    ctx->pc = 0x155ebcu;
    // NOP
    ctx->pc = 0x155ec0u;
}
