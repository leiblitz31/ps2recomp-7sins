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

// Function: sub_002D0F60
// Address: 0x2d0f60 - 0x2d1330
void sub_002D0F60_0x2d0f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0F60_0x2d0f60");
#endif

    switch (ctx->pc) {
        case 0x2d0fb0u: goto label_2d0fb0;
        case 0x2d0fdcu: goto label_2d0fdc;
        case 0x2d0fecu: goto label_2d0fec;
        case 0x2d1004u: goto label_2d1004;
        case 0x2d1010u: goto label_2d1010;
        case 0x2d101cu: goto label_2d101c;
        case 0x2d1034u: goto label_2d1034;
        case 0x2d104cu: goto label_2d104c;
        case 0x2d1080u: goto label_2d1080;
        case 0x2d109cu: goto label_2d109c;
        case 0x2d10b4u: goto label_2d10b4;
        case 0x2d10d0u: goto label_2d10d0;
        case 0x2d10e8u: goto label_2d10e8;
        case 0x2d1100u: goto label_2d1100;
        case 0x2d1134u: goto label_2d1134;
        case 0x2d1150u: goto label_2d1150;
        case 0x2d1164u: goto label_2d1164;
        case 0x2d119cu: goto label_2d119c;
        case 0x2d11b4u: goto label_2d11b4;
        case 0x2d11e8u: goto label_2d11e8;
        case 0x2d1204u: goto label_2d1204;
        case 0x2d1214u: goto label_2d1214;
        case 0x2d1228u: goto label_2d1228;
        case 0x2d1240u: goto label_2d1240;
        case 0x2d1250u: goto label_2d1250;
        case 0x2d1264u: goto label_2d1264;
        case 0x2d127cu: goto label_2d127c;
        case 0x2d1290u: goto label_2d1290;
        case 0x2d12a0u: goto label_2d12a0;
        case 0x2d12b8u: goto label_2d12b8;
        case 0x2d12d0u: goto label_2d12d0;
        default: break;
    }

    ctx->pc = 0x2d0f60u;

    // 0x2d0f60: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2d0f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2d0f64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d0f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d0f68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d0f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d0f6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d0f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d0f70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d0f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d0f74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d0f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d0f78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d0f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d0f7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d0f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d0f80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d0f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d0f84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d0f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d0f8c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x2d0f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x2d0f90: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x2d0f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x2d0f94: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x2d0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x2d0f98: 0xafa70140  sw          $a3, 0x140($sp)
    ctx->pc = 0x2d0f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
    // 0x2d0f9c: 0xafa80150  sw          $t0, 0x150($sp)
    ctx->pc = 0x2d0f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 8));
    // 0x2d0fa0: 0xafa90160  sw          $t1, 0x160($sp)
    ctx->pc = 0x2d0fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 9));
    // 0x2d0fa4: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2d0fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d0fa8: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2D0FA8u;
    SET_GPR_U32(ctx, 31, 0x2D0FB0u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2D0FA8u, 0x2D0FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0FB0u;
label_2d0fb0:
    // 0x2d0fb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0fb4: 0x1443005c  bne         $v0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2D0FB4u;
    {
        const bool branch_taken_0x2d0fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d0fb4) {
            ctx->pc = 0x2D1128u;
            goto label_2d1128;
        }
    }
    ctx->pc = 0x2D0FBCu;
    // 0x2d0fbc: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2d0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2d0fc0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2d0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d0fc4: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2D0FC4u;
    {
        const bool branch_taken_0x2d0fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0fc4) {
            ctx->pc = 0x2D10BCu;
            goto label_2d10bc;
        }
    }
    ctx->pc = 0x2D0FCCu;
    // 0x2d0fcc: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2d0fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d0fd0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2d0fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d0fd4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D0FD4u;
    SET_GPR_U32(ctx, 31, 0x2D0FDCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D0FD4u, 0x2D0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0FDCu;
label_2d0fdc:
    // 0x2d0fdc: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x2d0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x2d0fe0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d0fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d0fe4: 0xc097640  jal         func_25D900
    ctx->pc = 0x2D0FE4u;
    SET_GPR_U32(ctx, 31, 0x2D0FECu);
    ctx->pc = 0x25D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D900u, 0x2D0FE4u, 0x2D0FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0FECu;
label_2d0fec:
    // 0x2d0fec: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x2d0fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2d0ff0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2d0ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d0ff4: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x2d0ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d0ff8: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x2d0ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d0ffc: 0xc097704  jal         func_25DC10
    ctx->pc = 0x2D0FFCu;
    SET_GPR_U32(ctx, 31, 0x2D1004u);
    ctx->pc = 0x25DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DC10u, 0x2D0FFCu, 0x2D1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1004u;
label_2d1004:
    // 0x2d1004: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d1004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d1008: 0xc09762c  jal         func_25D8B0
    ctx->pc = 0x2D1008u;
    SET_GPR_U32(ctx, 31, 0x2D1010u);
    ctx->pc = 0x25D8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8B0u, 0x2D1008u, 0x2D1010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1010u;
label_2d1010:
    // 0x2d1010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1014: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1014u;
    {
        const bool branch_taken_0x2d1014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1014) {
            ctx->pc = 0x2D1090u;
            goto label_2d1090;
        }
    }
    ctx->pc = 0x2D101Cu;
label_2d101c:
    // 0x2d101c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d1020: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2d1020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d1024: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x2d1024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2d1028: 0x8fa70150  lw          $a3, 0x150($sp)
    ctx->pc = 0x2d1028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2d102c: 0xc0b43b8  jal         func_2D0EE0
    ctx->pc = 0x2D102Cu;
    SET_GPR_U32(ctx, 31, 0x2D1034u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x2D102Cu, 0x2D1034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1034u;
label_2d1034:
    // 0x2d1034: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D1034u;
    {
        const bool branch_taken_0x2d1034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1034) {
            ctx->pc = 0x2D108Cu;
            goto label_2d108c;
        }
    }
    ctx->pc = 0x2D103Cu;
    // 0x2d103c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d103cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d1040: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2d1040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d1044: 0xc0b59c0  jal         func_2D6700
    ctx->pc = 0x2D1044u;
    SET_GPR_U32(ctx, 31, 0x2D104Cu);
    ctx->pc = 0x2D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6700u, 0x2D1044u, 0x2D104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D104Cu;
label_2d104c:
    // 0x2d104c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d104cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1050: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2d1050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d1054: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x2d1054u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x2d1058: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2d1058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d105c: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x2d105cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x2d1060: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d1060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1064: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2d1064u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x2d1068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d106c: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2d106cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d1070: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d1070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d1074: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d1074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d1078: 0xc097584  jal         func_25D610
    ctx->pc = 0x2D1078u;
    SET_GPR_U32(ctx, 31, 0x2D1080u);
    ctx->pc = 0x25D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D610u, 0x2D1078u, 0x2D1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1080u;
label_2d1080:
    // 0x2d1080: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2d1080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1084: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2D1084u;
    {
        const bool branch_taken_0x2d1084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1084) {
            ctx->pc = 0x2D12FCu;
            goto label_2d12fc;
        }
    }
    ctx->pc = 0x2D108Cu;
label_2d108c:
    // 0x2d108c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x2d108cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2d1090:
    // 0x2d1090: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d1090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d1094: 0xc097970  jal         func_25E5C0
    ctx->pc = 0x2D1094u;
    SET_GPR_U32(ctx, 31, 0x2D109Cu);
    ctx->pc = 0x25E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E5C0u, 0x2D1094u, 0x2D109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D109Cu;
label_2d109c:
    // 0x2d109c: 0x1602ffdf  bne         $s0, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2D109Cu;
    {
        const bool branch_taken_0x2d109c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d109c) {
            ctx->pc = 0x2D101Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d101c;
        }
    }
    ctx->pc = 0x2D10A4u;
    // 0x2d10a4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d10a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d10a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d10a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d10ac: 0xc097584  jal         func_25D610
    ctx->pc = 0x2D10ACu;
    SET_GPR_U32(ctx, 31, 0x2D10B4u);
    ctx->pc = 0x25D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D610u, 0x2D10ACu, 0x2D10B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D10B4u;
label_2d10b4:
    // 0x2d10b4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2D10B4u;
    {
        const bool branch_taken_0x2d10b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d10b4) {
            ctx->pc = 0x2D12F8u;
            goto label_2d12f8;
        }
    }
    ctx->pc = 0x2D10BCu;
label_2d10bc:
    // 0x2d10bc: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2d10bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d10c0: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x2d10c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2d10c4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2d10c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d10c8: 0xc0b6194  jal         func_2D8650
    ctx->pc = 0x2D10C8u;
    SET_GPR_U32(ctx, 31, 0x2D10D0u);
    ctx->pc = 0x2D8650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8650u, 0x2D10C8u, 0x2D10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D10D0u;
label_2d10d0:
    // 0x2d10d0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d10d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d10d4: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2d10d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d10d8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2d10d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d10dc: 0x8fa70150  lw          $a3, 0x150($sp)
    ctx->pc = 0x2d10dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2d10e0: 0xc0b43b8  jal         func_2D0EE0
    ctx->pc = 0x2D10E0u;
    SET_GPR_U32(ctx, 31, 0x2D10E8u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x2D10E0u, 0x2D10E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D10E8u;
label_2d10e8:
    // 0x2d10e8: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2D10E8u;
    {
        const bool branch_taken_0x2d10e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d10e8) {
            ctx->pc = 0x2D12F8u;
            goto label_2d12f8;
        }
    }
    ctx->pc = 0x2D10F0u;
    // 0x2d10f0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d10f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d10f4: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2d10f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d10f8: 0xc0b59c0  jal         func_2D6700
    ctx->pc = 0x2D10F8u;
    SET_GPR_U32(ctx, 31, 0x2D1100u);
    ctx->pc = 0x2D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6700u, 0x2D10F8u, 0x2D1100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1100u;
label_2d1100:
    // 0x2d1100: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d1100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1104: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2d1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d1108: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x2d1108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x2d110c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2d110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d1110: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x2d1110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x2d1114: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2d1114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2d1118: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2d1118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x2d111c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1120: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2D1120u;
    {
        const bool branch_taken_0x2d1120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1120) {
            ctx->pc = 0x2D12FCu;
            goto label_2d12fc;
        }
    }
    ctx->pc = 0x2D1128u;
label_2d1128:
    // 0x2d1128: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2d1128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d112c: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2D112Cu;
    SET_GPR_U32(ctx, 31, 0x2D1134u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2D112Cu, 0x2D1134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1134u;
label_2d1134:
    // 0x2d1134: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2d1134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d1138: 0x14430028  bne         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D1138u;
    {
        const bool branch_taken_0x2d1138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1138) {
            ctx->pc = 0x2D11DCu;
            goto label_2d11dc;
        }
    }
    ctx->pc = 0x2D1140u;
    // 0x2d1140: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2d1140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d1144: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d1144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d1148: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D1148u;
    SET_GPR_U32(ctx, 31, 0x2D1150u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D1148u, 0x2D1150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1150u;
label_2d1150:
    // 0x2d1150: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d1150u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1154: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d1154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d1158: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2d1158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d115c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D115Cu;
    SET_GPR_U32(ctx, 31, 0x2D1164u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D115Cu, 0x2D1164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1164u;
label_2d1164:
    // 0x2d1164: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2d1164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d1168: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2d1168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d116c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1170: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d1170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1174: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d1174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1178: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d1178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d117c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d117cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d1180: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d1180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d1184: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d1184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d1188: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2d1188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d118c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2d118cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d1190: 0x8fa70150  lw          $a3, 0x150($sp)
    ctx->pc = 0x2d1190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2d1194: 0xc0b43b8  jal         func_2D0EE0
    ctx->pc = 0x2D1194u;
    SET_GPR_U32(ctx, 31, 0x2D119Cu);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x2D1194u, 0x2D119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D119Cu;
label_2d119c:
    // 0x2d119c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2D119Cu;
    {
        const bool branch_taken_0x2d119c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d119c) {
            ctx->pc = 0x2D12F8u;
            goto label_2d12f8;
        }
    }
    ctx->pc = 0x2D11A4u;
    // 0x2d11a4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d11a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d11a8: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2d11a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d11ac: 0xc0b59c0  jal         func_2D6700
    ctx->pc = 0x2D11ACu;
    SET_GPR_U32(ctx, 31, 0x2D11B4u);
    ctx->pc = 0x2D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6700u, 0x2D11ACu, 0x2D11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D11B4u;
label_2d11b4:
    // 0x2d11b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d11b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11b8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2d11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d11bc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x2d11bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x2d11c0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2d11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d11c4: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2d11c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x2d11c8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2d11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d11cc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2d11ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2d11d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d11d4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2D11D4u;
    {
        const bool branch_taken_0x2d11d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d11d4) {
            ctx->pc = 0x2D12FCu;
            goto label_2d12fc;
        }
    }
    ctx->pc = 0x2D11DCu;
label_2d11dc:
    // 0x2d11dc: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2d11dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d11e0: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2D11E0u;
    SET_GPR_U32(ctx, 31, 0x2D11E8u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2D11E0u, 0x2D11E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D11E8u;
label_2d11e8:
    // 0x2d11e8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d11e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d11ec: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2D11ECu;
    {
        const bool branch_taken_0x2d11ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d11ec) {
            ctx->pc = 0x2D12F8u;
            goto label_2d12f8;
        }
    }
    ctx->pc = 0x2D11F4u;
    // 0x2d11f4: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2d11f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d11f8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d11f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d11fc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D11FCu;
    SET_GPR_U32(ctx, 31, 0x2D1204u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D11FCu, 0x2D1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1204u;
label_2d1204:
    // 0x2d1204: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d1204u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1208: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d1208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d120c: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2D120Cu;
    SET_GPR_U32(ctx, 31, 0x2D1214u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2D120Cu, 0x2D1214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1214u;
label_2d1214:
    // 0x2d1214: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D1214u;
    {
        const bool branch_taken_0x2d1214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1214) {
            ctx->pc = 0x2D126Cu;
            goto label_2d126c;
        }
    }
    ctx->pc = 0x2D121Cu;
    // 0x2d121c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1220: 0xc096ea4  jal         func_25BA90
    ctx->pc = 0x2D1220u;
    SET_GPR_U32(ctx, 31, 0x2D1228u);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x2D1220u, 0x2D1228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1228u;
label_2d1228:
    // 0x2d1228: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2d1228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d122c: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D122Cu;
    {
        const bool branch_taken_0x2d122c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d122c) {
            ctx->pc = 0x2D126Cu;
            goto label_2d126c;
        }
    }
    ctx->pc = 0x2D1234u;
    // 0x2d1234: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d1234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1238: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2D1238u;
    SET_GPR_U32(ctx, 31, 0x2D1240u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2D1238u, 0x2D1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1240u;
label_2d1240:
    // 0x2d1240: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2d1240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2d1244: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d1244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1248: 0xc096ea4  jal         func_25BA90
    ctx->pc = 0x2D1248u;
    SET_GPR_U32(ctx, 31, 0x2D1250u);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x2D1248u, 0x2D1250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1250u;
label_2d1250:
    // 0x2d1250: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x2d1250u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d1254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1258: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2d1258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d125c: 0xc0b6194  jal         func_2D8650
    ctx->pc = 0x2D125Cu;
    SET_GPR_U32(ctx, 31, 0x2D1264u);
    ctx->pc = 0x2D8650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8650u, 0x2D125Cu, 0x2D1264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1264u;
label_2d1264:
    // 0x2d1264: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D1264u;
    {
        const bool branch_taken_0x2d1264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1264) {
            ctx->pc = 0x2D12A0u;
            goto label_2d12a0;
        }
    }
    ctx->pc = 0x2D126Cu;
label_2d126c:
    // 0x2d126c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2d126cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d1270: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d1270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d1274: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D1274u;
    SET_GPR_U32(ctx, 31, 0x2D127Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D1274u, 0x2D127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D127Cu;
label_2d127c:
    // 0x2d127c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d127cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1280: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2d1280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d1284: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d1284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1288: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D1288u;
    SET_GPR_U32(ctx, 31, 0x2D1290u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D1288u, 0x2D1290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1290u;
label_2d1290:
    // 0x2d1290: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d1290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d1294: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2d1294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d1298: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D1298u;
    SET_GPR_U32(ctx, 31, 0x2D12A0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D1298u, 0x2D12A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12A0u;
label_2d12a0:
    // 0x2d12a0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d12a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d12a4: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2d12a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d12a8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2d12a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d12ac: 0x8fa70150  lw          $a3, 0x150($sp)
    ctx->pc = 0x2d12acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2d12b0: 0xc0b43b8  jal         func_2D0EE0
    ctx->pc = 0x2D12B0u;
    SET_GPR_U32(ctx, 31, 0x2D12B8u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x2D12B0u, 0x2D12B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12B8u;
label_2d12b8:
    // 0x2d12b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D12B8u;
    {
        const bool branch_taken_0x2d12b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d12b8) {
            ctx->pc = 0x2D12F8u;
            goto label_2d12f8;
        }
    }
    ctx->pc = 0x2D12C0u;
    // 0x2d12c0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2d12c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d12c4: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2d12c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d12c8: 0xc0b59c0  jal         func_2D6700
    ctx->pc = 0x2D12C8u;
    SET_GPR_U32(ctx, 31, 0x2D12D0u);
    ctx->pc = 0x2D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6700u, 0x2D12C8u, 0x2D12D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12D0u;
label_2d12d0:
    // 0x2d12d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d12d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12d4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2d12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d12d8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2d12d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2d12dc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2d12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d12e0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2d12e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x2d12e4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2d12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d12e8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2d12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2d12ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d12ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d12f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D12F0u;
    {
        const bool branch_taken_0x2d12f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d12f0) {
            ctx->pc = 0x2D12FCu;
            goto label_2d12fc;
        }
    }
    ctx->pc = 0x2D12F8u;
label_2d12f8:
    // 0x2d12f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d12f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d12fc:
    // 0x2d12fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d12fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d1300: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d1300u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d1304: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d1304u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d1308: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d1308u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d130c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d130cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1310: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d1310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d1314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d1318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d131c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d131cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1324: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x2d1324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d1328: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1330u;
}
