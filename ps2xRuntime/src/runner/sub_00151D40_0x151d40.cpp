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

// Function: sub_00151D40
// Address: 0x151d40 - 0x152390
void sub_00151D40_0x151d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151D40_0x151d40");
#endif

    switch (ctx->pc) {
        case 0x151d90u: goto label_151d90;
        case 0x151dacu: goto label_151dac;
        case 0x151dbcu: goto label_151dbc;
        case 0x151dd4u: goto label_151dd4;
        case 0x151de8u: goto label_151de8;
        case 0x151e00u: goto label_151e00;
        case 0x151e30u: goto label_151e30;
        case 0x151e4cu: goto label_151e4c;
        case 0x151e60u: goto label_151e60;
        case 0x151e78u: goto label_151e78;
        case 0x151e98u: goto label_151e98;
        case 0x151eb0u: goto label_151eb0;
        case 0x151ebcu: goto label_151ebc;
        case 0x151ef8u: goto label_151ef8;
        case 0x151f14u: goto label_151f14;
        case 0x151f24u: goto label_151f24;
        case 0x151f3cu: goto label_151f3c;
        case 0x151f54u: goto label_151f54;
        case 0x151f88u: goto label_151f88;
        case 0x151fb4u: goto label_151fb4;
        case 0x151fd4u: goto label_151fd4;
        case 0x151fe4u: goto label_151fe4;
        case 0x152010u: goto label_152010;
        case 0x15201cu: goto label_15201c;
        case 0x152030u: goto label_152030;
        case 0x152048u: goto label_152048;
        case 0x15205cu: goto label_15205c;
        case 0x152080u: goto label_152080;
        case 0x1520a0u: goto label_1520a0;
        case 0x1520b0u: goto label_1520b0;
        case 0x1520c8u: goto label_1520c8;
        case 0x1520d4u: goto label_1520d4;
        case 0x1520e4u: goto label_1520e4;
        case 0x1520f8u: goto label_1520f8;
        case 0x152110u: goto label_152110;
        case 0x152128u: goto label_152128;
        case 0x15213cu: goto label_15213c;
        case 0x152154u: goto label_152154;
        case 0x152168u: goto label_152168;
        case 0x152194u: goto label_152194;
        case 0x1521c8u: goto label_1521c8;
        case 0x1521e4u: goto label_1521e4;
        case 0x1521f0u: goto label_1521f0;
        case 0x152214u: goto label_152214;
        case 0x152228u: goto label_152228;
        case 0x152240u: goto label_152240;
        case 0x152278u: goto label_152278;
        case 0x152288u: goto label_152288;
        case 0x1522a0u: goto label_1522a0;
        case 0x1522b8u: goto label_1522b8;
        case 0x1522ecu: goto label_1522ec;
        case 0x152318u: goto label_152318;
        case 0x152344u: goto label_152344;
        case 0x152360u: goto label_152360;
        case 0x152370u: goto label_152370;
        default: break;
    }

    ctx->pc = 0x151d40u;

    // 0x151d40: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x151d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x151d44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x151d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x151d48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x151d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x151d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151d50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151d54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151d58: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x151d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x151d5c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x151d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x151d60: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x151d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x151d64: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x151d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x151d68: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x151d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151d6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x151d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151d70: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x151d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151d74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x151d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151d78: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x151d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x151d7c: 0x1462009b  bne         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x151D7Cu;
    {
        const bool branch_taken_0x151d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x151d7c) {
            ctx->pc = 0x151FECu;
            goto label_151fec;
        }
    }
    ctx->pc = 0x151D84u;
    // 0x151d84: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x151d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151d88: 0xc05490c  jal         func_152430
    ctx->pc = 0x151D88u;
    SET_GPR_U32(ctx, 31, 0x151D90u);
    ctx->pc = 0x152430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152430u, 0x151D88u, 0x151D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151D90u;
label_151d90:
    // 0x151d90: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x151D90u;
    {
        const bool branch_taken_0x151d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151d90) {
            ctx->pc = 0x151DC4u;
            goto label_151dc4;
        }
    }
    ctx->pc = 0x151D98u;
    // 0x151d98: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x151d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x151d9c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x151d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151da0: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x151da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151da4: 0xc054ad8  jal         func_152B60
    ctx->pc = 0x151DA4u;
    SET_GPR_U32(ctx, 31, 0x151DACu);
    ctx->pc = 0x152B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B60u, 0x151DA4u, 0x151DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DACu;
label_151dac:
    // 0x151dac: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x151dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151db0: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x151db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x151db4: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x151DB4u;
    SET_GPR_U32(ctx, 31, 0x151DBCu);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x151DB4u, 0x151DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DBCu;
label_151dbc:
    // 0x151dbc: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x151DBCu;
    {
        const bool branch_taken_0x151dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151dbc) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x151DC4u;
label_151dc4:
    // 0x151dc4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x151dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151dc8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x151dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151dcc: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x151DCCu;
    SET_GPR_U32(ctx, 31, 0x151DD4u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x151DCCu, 0x151DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DD4u;
label_151dd4:
    // 0x151dd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x151dd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151dd8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x151dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151ddc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x151ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151de0: 0xc0548fc  jal         func_1523F0
    ctx->pc = 0x151DE0u;
    SET_GPR_U32(ctx, 31, 0x151DE8u);
    ctx->pc = 0x1523F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523F0u, 0x151DE0u, 0x151DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DE8u;
label_151de8:
    // 0x151de8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x151de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151dec: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x151decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x151df0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x151df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151df4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x151df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151df8: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x151DF8u;
    SET_GPR_U32(ctx, 31, 0x151E00u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x151DF8u, 0x151E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E00u;
label_151e00:
    // 0x151e00: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x151E00u;
    {
        const bool branch_taken_0x151e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e00) {
            ctx->pc = 0x151E3Cu;
            goto label_151e3c;
        }
    }
    ctx->pc = 0x151E08u;
    // 0x151e08: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x151e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151e0c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x151e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151e10: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x151e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151e14: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x151e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151e18: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x151e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151e1c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x151e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151e20: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x151e20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151e24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x151e24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e28: 0xc054b70  jal         func_152DC0
    ctx->pc = 0x151E28u;
    SET_GPR_U32(ctx, 31, 0x151E30u);
    ctx->pc = 0x152DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DC0u, 0x151E28u, 0x151E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E30u;
label_151e30:
    // 0x151e30: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x151e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151e34: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x151E34u;
    {
        const bool branch_taken_0x151e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e34) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x151E3Cu;
label_151e3c:
    // 0x151e3c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x151e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151e40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x151e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151e44: 0xc0548fc  jal         func_1523F0
    ctx->pc = 0x151E44u;
    SET_GPR_U32(ctx, 31, 0x151E4Cu);
    ctx->pc = 0x1523F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523F0u, 0x151E44u, 0x151E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E4Cu;
label_151e4c:
    // 0x151e4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x151e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e50: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x151e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x151e54: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x151e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151e58: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x151E58u;
    SET_GPR_U32(ctx, 31, 0x151E60u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x151E58u, 0x151E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E60u;
label_151e60:
    // 0x151e60: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x151e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151e64: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x151e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x151e68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x151e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x151e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e70: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x151E70u;
    SET_GPR_U32(ctx, 31, 0x151E78u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x151E70u, 0x151E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E78u;
label_151e78:
    // 0x151e78: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x151e78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151e7c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x151e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x151e80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x151E80u;
    {
        const bool branch_taken_0x151e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151e80) {
            ctx->pc = 0x151EA0u;
            goto label_151ea0;
        }
    }
    ctx->pc = 0x151E88u;
    // 0x151e88: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x151e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151e8c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x151e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151e90: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x151E90u;
    SET_GPR_U32(ctx, 31, 0x151E98u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x151E90u, 0x151E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E98u;
label_151e98:
    // 0x151e98: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x151E98u;
    {
        const bool branch_taken_0x151e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e98) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x151EA0u;
label_151ea0:
    // 0x151ea0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x151ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x151ea4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x151ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151ea8: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x151EA8u;
    SET_GPR_U32(ctx, 31, 0x151EB0u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x151EA8u, 0x151EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EB0u;
label_151eb0:
    // 0x151eb0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x151eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x151eb4: 0xc052d4c  jal         func_14B530
    ctx->pc = 0x151EB4u;
    SET_GPR_U32(ctx, 31, 0x151EBCu);
    ctx->pc = 0x14B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B530u, 0x151EB4u, 0x151EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EBCu;
label_151ebc:
    // 0x151ebc: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x151ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x151ec0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x151ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151ec4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x151ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151ec8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x151EC8u;
    {
        const bool branch_taken_0x151ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x151ec8) {
            ctx->pc = 0x151F04u;
            goto label_151f04;
        }
    }
    ctx->pc = 0x151ED0u;
    // 0x151ed0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x151ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151ed4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x151ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151ed8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x151ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151edc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x151edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ee4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x151ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151ee8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x151ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151eec: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x151eecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151ef0: 0xc054b70  jal         func_152DC0
    ctx->pc = 0x151EF0u;
    SET_GPR_U32(ctx, 31, 0x151EF8u);
    ctx->pc = 0x152DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DC0u, 0x151EF0u, 0x151EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EF8u;
label_151ef8:
    // 0x151ef8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x151ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151efc: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x151EFCu;
    {
        const bool branch_taken_0x151efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151efc) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x151F04u;
label_151f04:
    // 0x151f04: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x151f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x151f08: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x151f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151f0c: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x151F0Cu;
    SET_GPR_U32(ctx, 31, 0x151F14u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x151F0Cu, 0x151F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F14u;
label_151f14:
    // 0x151f14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x151f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f18: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x151f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x151f1c: 0xc0548fc  jal         func_1523F0
    ctx->pc = 0x151F1Cu;
    SET_GPR_U32(ctx, 31, 0x151F24u);
    ctx->pc = 0x1523F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523F0u, 0x151F1Cu, 0x151F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F24u;
label_151f24:
    // 0x151f24: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x151f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151f28: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x151f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x151f2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x151f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x151f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f34: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x151F34u;
    SET_GPR_U32(ctx, 31, 0x151F3Cu);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x151F34u, 0x151F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F3Cu;
label_151f3c:
    // 0x151f3c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x151F3Cu;
    {
        const bool branch_taken_0x151f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f3c) {
            ctx->pc = 0x151FC0u;
            goto label_151fc0;
        }
    }
    ctx->pc = 0x151F44u;
    // 0x151f44: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x151f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151f48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x151f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151f4c: 0xc0548f4  jal         func_1523D0
    ctx->pc = 0x151F4Cu;
    SET_GPR_U32(ctx, 31, 0x151F54u);
    ctx->pc = 0x1523D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523D0u, 0x151F4Cu, 0x151F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F54u;
label_151f54:
    // 0x151f54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x151f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151f58: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x151F58u;
    {
        const bool branch_taken_0x151f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151f58) {
            ctx->pc = 0x151F94u;
            goto label_151f94;
        }
    }
    ctx->pc = 0x151F60u;
    // 0x151f60: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x151f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151f64: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x151f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151f68: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x151f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151f6c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x151f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151f70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f74: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x151f74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151f78: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x151f78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151f7c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x151f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151f80: 0xc054b70  jal         func_152DC0
    ctx->pc = 0x151F80u;
    SET_GPR_U32(ctx, 31, 0x151F88u);
    ctx->pc = 0x152DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DC0u, 0x151F80u, 0x151F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F88u;
label_151f88:
    // 0x151f88: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x151f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151f8c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x151F8Cu;
    {
        const bool branch_taken_0x151f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f8c) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x151F94u;
label_151f94:
    // 0x151f94: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x151f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151f98: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x151f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151f9c: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x151f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x151fa0: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x151fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x151fa4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x151fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151fa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x151fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151fac: 0xc054b70  jal         func_152DC0
    ctx->pc = 0x151FACu;
    SET_GPR_U32(ctx, 31, 0x151FB4u);
    ctx->pc = 0x152DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DC0u, 0x151FACu, 0x151FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FB4u;
label_151fb4:
    // 0x151fb4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x151fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151fb8: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x151FB8u;
    {
        const bool branch_taken_0x151fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151fb8) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x151FC0u;
label_151fc0:
    // 0x151fc0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x151fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x151fc4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x151fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151fc8: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x151fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151fcc: 0xc054ad8  jal         func_152B60
    ctx->pc = 0x151FCCu;
    SET_GPR_U32(ctx, 31, 0x151FD4u);
    ctx->pc = 0x152B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B60u, 0x151FCCu, 0x151FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FD4u;
label_151fd4:
    // 0x151fd4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x151fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151fd8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x151fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x151fdc: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x151FDCu;
    SET_GPR_U32(ctx, 31, 0x151FE4u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x151FDCu, 0x151FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FE4u;
label_151fe4:
    // 0x151fe4: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x151FE4u;
    {
        const bool branch_taken_0x151fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151fe4) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x151FECu;
label_151fec:
    // 0x151fec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x151fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151ff0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x151ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151ff4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x151ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151ff8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x151ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151ffc: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x151FFCu;
    {
        const bool branch_taken_0x151ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x151ffc) {
            ctx->pc = 0x1520B8u;
            goto label_1520b8;
        }
    }
    ctx->pc = 0x152004u;
    // 0x152004: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x152004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152008: 0xc0528e0  jal         func_14A380
    ctx->pc = 0x152008u;
    SET_GPR_U32(ctx, 31, 0x152010u);
    ctx->pc = 0x14A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A380u, 0x152008u, 0x152010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152010u;
label_152010:
    // 0x152010: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x152010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152014: 0xc052bbc  jal         func_14AEF0
    ctx->pc = 0x152014u;
    SET_GPR_U32(ctx, 31, 0x15201Cu);
    ctx->pc = 0x14AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEF0u, 0x152014u, 0x15201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15201Cu;
label_15201c:
    // 0x15201c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15201cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152020: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x152020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x152024: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x152024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152028: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x152028u;
    SET_GPR_U32(ctx, 31, 0x152030u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x152028u, 0x152030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152030u;
label_152030:
    // 0x152030: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x152030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152034: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x152034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152038: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15203c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15203cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152040: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x152040u;
    SET_GPR_U32(ctx, 31, 0x152048u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x152040u, 0x152048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152048u;
label_152048:
    // 0x152048: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x152048u;
    {
        const bool branch_taken_0x152048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152048) {
            ctx->pc = 0x15208Cu;
            goto label_15208c;
        }
    }
    ctx->pc = 0x152050u;
    // 0x152050: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x152050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152054: 0xc0528e0  jal         func_14A380
    ctx->pc = 0x152054u;
    SET_GPR_U32(ctx, 31, 0x15205Cu);
    ctx->pc = 0x14A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A380u, 0x152054u, 0x15205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15205Cu;
label_15205c:
    // 0x15205c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152060: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152064: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15206c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15206cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152070: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x152070u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152074: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x152074u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152078: 0xc054b70  jal         func_152DC0
    ctx->pc = 0x152078u;
    SET_GPR_U32(ctx, 31, 0x152080u);
    ctx->pc = 0x152DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DC0u, 0x152078u, 0x152080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152080u;
label_152080:
    // 0x152080: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x152080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152084: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x152084u;
    {
        const bool branch_taken_0x152084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152084) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x15208Cu;
label_15208c:
    // 0x15208c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x15208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x152090: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152094: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x152094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152098: 0xc054ad8  jal         func_152B60
    ctx->pc = 0x152098u;
    SET_GPR_U32(ctx, 31, 0x1520A0u);
    ctx->pc = 0x152B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B60u, 0x152098u, 0x1520A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520A0u;
label_1520a0:
    // 0x1520a0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1520a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1520a4: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x1520a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1520a8: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x1520A8u;
    SET_GPR_U32(ctx, 31, 0x1520B0u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x1520A8u, 0x1520B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520B0u;
label_1520b0:
    // 0x1520b0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1520B0u;
    {
        const bool branch_taken_0x1520b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1520b0) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x1520B8u;
label_1520b8:
    // 0x1520b8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1520b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1520bc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1520bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1520c0: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x1520C0u;
    SET_GPR_U32(ctx, 31, 0x1520C8u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x1520C0u, 0x1520C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520C8u;
label_1520c8:
    // 0x1520c8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1520c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1520cc: 0xc0548e4  jal         func_152390
    ctx->pc = 0x1520CCu;
    SET_GPR_U32(ctx, 31, 0x1520D4u);
    ctx->pc = 0x152390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152390u, 0x1520CCu, 0x1520D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520D4u;
label_1520d4:
    // 0x1520d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1520d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1520d8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1520d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1520dc: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x1520DCu;
    SET_GPR_U32(ctx, 31, 0x1520E4u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x1520DCu, 0x1520E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520E4u;
label_1520e4:
    // 0x1520e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1520e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1520e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1520ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1520ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1520f0: 0xc0548fc  jal         func_1523F0
    ctx->pc = 0x1520F0u;
    SET_GPR_U32(ctx, 31, 0x1520F8u);
    ctx->pc = 0x1523F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523F0u, 0x1520F0u, 0x1520F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520F8u;
label_1520f8:
    // 0x1520f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1520f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1520fc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1520fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152100: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152104: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152108: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x152108u;
    SET_GPR_U32(ctx, 31, 0x152110u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x152108u, 0x152110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152110u;
label_152110:
    // 0x152110: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x152110u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x152114: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x152114u;
    {
        const bool branch_taken_0x152114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x152114) {
            ctx->pc = 0x1521D4u;
            goto label_1521d4;
        }
    }
    ctx->pc = 0x15211Cu;
    // 0x15211c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x15211cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x152120: 0xc0548fc  jal         func_1523F0
    ctx->pc = 0x152120u;
    SET_GPR_U32(ctx, 31, 0x152128u);
    ctx->pc = 0x1523F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523F0u, 0x152120u, 0x152128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152128u;
label_152128:
    // 0x152128: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x152128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15212c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x15212cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x152130: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x152130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152134: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x152134u;
    SET_GPR_U32(ctx, 31, 0x15213Cu);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x152134u, 0x15213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15213Cu;
label_15213c:
    // 0x15213c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152140: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x152140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152148: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15214c: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x15214Cu;
    SET_GPR_U32(ctx, 31, 0x152154u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x15214Cu, 0x152154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152154u;
label_152154:
    // 0x152154: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x152154u;
    {
        const bool branch_taken_0x152154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152154) {
            ctx->pc = 0x1521D4u;
            goto label_1521d4;
        }
    }
    ctx->pc = 0x15215Cu;
    // 0x15215c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x15215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x152160: 0xc0548f4  jal         func_1523D0
    ctx->pc = 0x152160u;
    SET_GPR_U32(ctx, 31, 0x152168u);
    ctx->pc = 0x1523D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523D0u, 0x152160u, 0x152168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152168u;
label_152168:
    // 0x152168: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15216c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15216Cu;
    {
        const bool branch_taken_0x15216c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15216c) {
            ctx->pc = 0x1521A0u;
            goto label_1521a0;
        }
    }
    ctx->pc = 0x152174u;
    // 0x152174: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152178: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15217c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15217cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152180: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x152180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x152184: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x152184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152188: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x152188u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x15218c: 0xc054b70  jal         func_152DC0
    ctx->pc = 0x15218Cu;
    SET_GPR_U32(ctx, 31, 0x152194u);
    ctx->pc = 0x152DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DC0u, 0x15218Cu, 0x152194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152194u;
label_152194:
    // 0x152194: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x152194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152198: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x152198u;
    {
        const bool branch_taken_0x152198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152198) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x1521A0u;
label_1521a0:
    // 0x1521a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1521a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1521a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1521a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1521a8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1521a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1521ac: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1521acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1521b0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1521b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1521b4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1521b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1521b8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1521b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1521bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1521bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521c0: 0xc054b70  jal         func_152DC0
    ctx->pc = 0x1521C0u;
    SET_GPR_U32(ctx, 31, 0x1521C8u);
    ctx->pc = 0x152DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DC0u, 0x1521C0u, 0x1521C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1521C8u;
label_1521c8:
    // 0x1521c8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1521c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1521cc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1521CCu;
    {
        const bool branch_taken_0x1521cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1521cc) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x1521D4u;
label_1521d4:
    // 0x1521d4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1521d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1521d8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1521d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1521dc: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x1521DCu;
    SET_GPR_U32(ctx, 31, 0x1521E4u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x1521DCu, 0x1521E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1521E4u;
label_1521e4:
    // 0x1521e4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1521e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1521e8: 0xc052d4c  jal         func_14B530
    ctx->pc = 0x1521E8u;
    SET_GPR_U32(ctx, 31, 0x1521F0u);
    ctx->pc = 0x14B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B530u, 0x1521E8u, 0x1521F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1521F0u;
label_1521f0:
    // 0x1521f0: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x1521f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1521f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1521f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1521f8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1521f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1521fc: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1521FCu;
    {
        const bool branch_taken_0x1521fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1521fc) {
            ctx->pc = 0x152244u;
            goto label_152244;
        }
    }
    ctx->pc = 0x152204u;
    // 0x152204: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x152204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152208: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x152208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15220c: 0xc0548fc  jal         func_1523F0
    ctx->pc = 0x15220Cu;
    SET_GPR_U32(ctx, 31, 0x152214u);
    ctx->pc = 0x1523F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523F0u, 0x15220Cu, 0x152214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152214u;
label_152214:
    // 0x152214: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x152214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152218: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x152218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15221c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x15221cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152220: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x152220u;
    SET_GPR_U32(ctx, 31, 0x152228u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x152220u, 0x152228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152228u;
label_152228:
    // 0x152228: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x152228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15222c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x15222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152230: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152234: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152238: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x152238u;
    SET_GPR_U32(ctx, 31, 0x152240u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x152238u, 0x152240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152240u;
label_152240:
    // 0x152240: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x152240u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_152244:
    // 0x152244: 0x16000037  bnez        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x152244u;
    {
        const bool branch_taken_0x152244 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x152244) {
            ctx->pc = 0x152324u;
            goto label_152324;
        }
    }
    ctx->pc = 0x15224Cu;
    // 0x15224c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x15224Cu;
    {
        const bool branch_taken_0x15224c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15224c) {
            ctx->pc = 0x152324u;
            goto label_152324;
        }
    }
    ctx->pc = 0x152254u;
    // 0x152254: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x152254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x152258: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x152258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15225c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152260: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x152260u;
    {
        const bool branch_taken_0x152260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152260) {
            ctx->pc = 0x1522A8u;
            goto label_1522a8;
        }
    }
    ctx->pc = 0x152268u;
    // 0x152268: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x152268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x15226c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x15226cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152270: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x152270u;
    SET_GPR_U32(ctx, 31, 0x152278u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x152270u, 0x152278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152278u;
label_152278:
    // 0x152278: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x152278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15227c: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x15227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x152280: 0xc0548fc  jal         func_1523F0
    ctx->pc = 0x152280u;
    SET_GPR_U32(ctx, 31, 0x152288u);
    ctx->pc = 0x1523F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523F0u, 0x152280u, 0x152288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152288u;
label_152288:
    // 0x152288: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x152288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15228c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x15228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152290: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152294: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152298: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x152298u;
    SET_GPR_U32(ctx, 31, 0x1522A0u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x152298u, 0x1522A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522A0u;
label_1522a0:
    // 0x1522a0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1522A0u;
    {
        const bool branch_taken_0x1522a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522a0) {
            ctx->pc = 0x152324u;
            goto label_152324;
        }
    }
    ctx->pc = 0x1522A8u;
label_1522a8:
    // 0x1522a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1522a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1522ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1522acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1522b0: 0xc0548f4  jal         func_1523D0
    ctx->pc = 0x1522B0u;
    SET_GPR_U32(ctx, 31, 0x1522B8u);
    ctx->pc = 0x1523D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523D0u, 0x1522B0u, 0x1522B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522B8u;
label_1522b8:
    // 0x1522b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1522b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1522bc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1522BCu;
    {
        const bool branch_taken_0x1522bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1522bc) {
            ctx->pc = 0x1522F8u;
            goto label_1522f8;
        }
    }
    ctx->pc = 0x1522C4u;
    // 0x1522c4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1522c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1522c8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1522c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1522cc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1522ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1522d0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1522d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1522d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1522d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522d8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1522d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1522dc: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1522dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1522e0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1522e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1522e4: 0xc054b70  jal         func_152DC0
    ctx->pc = 0x1522E4u;
    SET_GPR_U32(ctx, 31, 0x1522ECu);
    ctx->pc = 0x152DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DC0u, 0x1522E4u, 0x1522ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522ECu;
label_1522ec:
    // 0x1522ec: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1522ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1522f0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1522F0u;
    {
        const bool branch_taken_0x1522f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522f0) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x1522F8u;
label_1522f8:
    // 0x1522f8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1522f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1522fc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1522fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152300: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x152300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x152304: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x152304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x152308: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x152308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15230c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15230cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152310: 0xc054b70  jal         func_152DC0
    ctx->pc = 0x152310u;
    SET_GPR_U32(ctx, 31, 0x152318u);
    ctx->pc = 0x152DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DC0u, 0x152310u, 0x152318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152318u;
label_152318:
    // 0x152318: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x152318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15231c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15231Cu;
    {
        const bool branch_taken_0x15231c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15231c) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x152324u;
label_152324:
    // 0x152324: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x152324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x152328: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x152328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x15232c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15232Cu;
    {
        const bool branch_taken_0x15232c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15232c) {
            ctx->pc = 0x15234Cu;
            goto label_15234c;
        }
    }
    ctx->pc = 0x152334u;
    // 0x152334: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152338: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x152338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15233c: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x15233Cu;
    SET_GPR_U32(ctx, 31, 0x152344u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x15233Cu, 0x152344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152344u;
label_152344:
    // 0x152344: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x152344u;
    {
        const bool branch_taken_0x152344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152344) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x15234Cu;
label_15234c:
    // 0x15234c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15234cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x152350: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152354: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x152354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152358: 0xc054ad8  jal         func_152B60
    ctx->pc = 0x152358u;
    SET_GPR_U32(ctx, 31, 0x152360u);
    ctx->pc = 0x152B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B60u, 0x152358u, 0x152360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152360u;
label_152360:
    // 0x152360: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x152360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152364: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x152364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x152368: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x152368u;
    SET_GPR_U32(ctx, 31, 0x152370u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x152368u, 0x152370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152370u;
label_152370:
    // 0x152370: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x152370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152374: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152378: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15237c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15237cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152384: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x152384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x152388: 0x3e00008  jr          $ra
    ctx->pc = 0x152388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152390u;
}
