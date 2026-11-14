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

// Function: sub_004A1278
// Address: 0x4a1278 - 0x4a1730
void sub_004A1278_0x4a1278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1278_0x4a1278");
#endif

    switch (ctx->pc) {
        case 0x4a12e8u: goto label_4a12e8;
        case 0x4a1300u: goto label_4a1300;
        case 0x4a1310u: goto label_4a1310;
        case 0x4a132cu: goto label_4a132c;
        case 0x4a133cu: goto label_4a133c;
        case 0x4a1358u: goto label_4a1358;
        case 0x4a13a0u: goto label_4a13a0;
        case 0x4a1408u: goto label_4a1408;
        case 0x4a1438u: goto label_4a1438;
        case 0x4a14a0u: goto label_4a14a0;
        case 0x4a14f4u: goto label_4a14f4;
        case 0x4a1554u: goto label_4a1554;
        case 0x4a1564u: goto label_4a1564;
        case 0x4a1588u: goto label_4a1588;
        case 0x4a1624u: goto label_4a1624;
        case 0x4a1634u: goto label_4a1634;
        case 0x4a1640u: goto label_4a1640;
        case 0x4a1660u: goto label_4a1660;
        case 0x4a1670u: goto label_4a1670;
        case 0x4a16a0u: goto label_4a16a0;
        case 0x4a16b0u: goto label_4a16b0;
        case 0x4a1704u: goto label_4a1704;
        default: break;
    }

    ctx->pc = 0x4a1278u;

label_4a1278:
    // 0x4a1278: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4a1278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x4a127c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x4a127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x4a1280: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x4a1280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x4a1284: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x4a1284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1288: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x4a1288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x4a128c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x4a128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x4a1290: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x4a1290u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1294: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4a1294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x4a1298: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4a1298u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a129c: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x4a129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x4a12a0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x4a12a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a12a4: 0xafaa0058  sw          $t2, 0x58($sp)
    ctx->pc = 0x4a12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 10));
    // 0x4a12a8: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x4a12a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a12ac: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x4a12acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x4a12b0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x4a12b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x4a12b4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x4a12b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x4a12b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a12b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4a12bc: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x4a12bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x4a12c0: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x4a12c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x4a12c4: 0x124a00bf  beq         $s2, $t2, . + 4 + (0xBF << 2)
    ctx->pc = 0x4A12C4u;
    {
        const bool branch_taken_0x4a12c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 10));
        ctx->pc = 0x4A12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A12C4u;
        // 0x4a12c8: 0x8fb30100  lw          $s3, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a12c4) {
            ctx->pc = 0x4A15C4u;
            goto label_4a15c4;
        }
    }
    ctx->pc = 0x4A12CCu;
    // 0x4a12cc: 0x1640004a  bnez        $s2, . + 4 + (0x4A << 2)
    ctx->pc = 0x4A12CCu;
    {
        const bool branch_taken_0x4a12cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A12CCu;
        // 0x4a12d0: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a12cc) {
            ctx->pc = 0x4A13F8u;
            goto label_4a13f8;
        }
    }
    ctx->pc = 0x4A12D4u;
    // 0x4a12d4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4a12d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a12d8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4a12d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a12dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a12dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a12e0: 0xc1297da  jal         func_4A5F68
    ctx->pc = 0x4A12E0u;
    SET_GPR_U32(ctx, 31, 0x4A12E8u);
    ctx->pc = 0x4A12E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A12E0u;
    // 0x4a12e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5F68u, 0x4A12E0u, 0x4A12E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A12E8u;
label_4a12e8:
    // 0x4a12e8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x4a12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4a12ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4a12ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4a12f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4a12f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a12f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a12f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a12f8: 0xc1297da  jal         func_4A5F68
    ctx->pc = 0x4A12F8u;
    SET_GPR_U32(ctx, 31, 0x4A1300u);
    ctx->pc = 0x4A12FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A12F8u;
    // 0x4a12fc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5F68u, 0x4A12F8u, 0x4A1300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1300u;
label_4a1300:
    // 0x4a1300: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a1300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4a1304: 0xafb60030  sw          $s6, 0x30($sp)
    ctx->pc = 0x4a1304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 22));
    // 0x4a1308: 0x245486d8  addiu       $s4, $v0, -0x7928
    ctx->pc = 0x4a1308u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936280));
    // 0x4a130c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x4a130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_4a1310:
    // 0x4a1310: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x4a1310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a1314: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x4a1314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4a1318: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x4a1318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x4a131c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A131Cu;
    {
        const bool branch_taken_0x4a131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A131Cu;
        // 0x4a1320: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a131c) {
            ctx->pc = 0x4A1380u;
            goto label_4a1380;
        }
    }
    ctx->pc = 0x4A1324u;
    // 0x4a1324: 0xc12976a  jal         func_4A5DA8
    ctx->pc = 0x4A1324u;
    SET_GPR_U32(ctx, 31, 0x4A132Cu);
    ctx->pc = 0x4A1328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1324u;
    // 0x4a1328: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DA8u, 0x4A1324u, 0x4A132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A132Cu;
label_4a132c:
    // 0x4a132c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4A132Cu;
    {
        const bool branch_taken_0x4a132c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A132Cu;
        // 0x4a1330: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a132c) {
            ctx->pc = 0x4A1380u;
            goto label_4a1380;
        }
    }
    ctx->pc = 0x4A1334u;
    // 0x4a1334: 0xc12976a  jal         func_4A5DA8
    ctx->pc = 0x4A1334u;
    SET_GPR_U32(ctx, 31, 0x4A133Cu);
    ctx->pc = 0x4A1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1334u;
    // 0x4a1338: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DA8u, 0x4A1334u, 0x4A133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A133Cu;
label_4a133c:
    // 0x4a133c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A133Cu;
    {
        const bool branch_taken_0x4a133c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A133Cu;
        // 0x4a1340: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a133c) {
            ctx->pc = 0x4A1384u;
            goto label_4a1384;
        }
    }
    ctx->pc = 0x4A1344u;
    // 0x4a1344: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x4a1344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x4a1348: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x4A1348u;
    {
        const bool branch_taken_0x4a1348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1348u;
        // 0x4a134c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1348) {
            ctx->pc = 0x4A15C8u;
            goto label_4a15c8;
        }
    }
    ctx->pc = 0x4A1350u;
    // 0x4a1350: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4a1350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1354: 0x2603003c  addiu       $v1, $s0, 0x3C
    ctx->pc = 0x4a1354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_4a1358:
    // 0x4a1358: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a1358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a135c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a135cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4a1360: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4a1360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4a1364: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a1364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a1368: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x4a1368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x4a136c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4a136cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a1370: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A1370u;
    {
        const bool branch_taken_0x4a1370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1370u;
        // 0x4a1374: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1370) {
            ctx->pc = 0x4A1358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1358;
        }
    }
    ctx->pc = 0x4A1378u;
    // 0x4a1378: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x4A1378u;
    {
        const bool branch_taken_0x4a1378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1378u;
        // 0x4a137c: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1378) {
            ctx->pc = 0x4A15C8u;
            goto label_4a15c8;
        }
    }
    ctx->pc = 0x4A1380u;
label_4a1380:
    // 0x4a1380: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a1380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4a1384:
    // 0x4a1384: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x4a1384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4a1388: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4A1388u;
    {
        const bool branch_taken_0x4a1388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1388u;
        // 0x4a138c: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1388) {
            ctx->pc = 0x4A1310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1310;
        }
    }
    ctx->pc = 0x4A1390u;
    // 0x4a1390: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a1390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4a1394: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a1394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1398: 0x24445f10  addiu       $a0, $v0, 0x5F10
    ctx->pc = 0x4a1398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24336));
    // 0x4a139c: 0x0  nop
    ctx->pc = 0x4a139cu;
    // NOP
label_4a13a0:
    // 0x4a13a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a13a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a13a4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x4a13a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a13a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a13ac: 0x54a2000e  bnel        $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4A13ACu;
    {
        const bool branch_taken_0x4a13ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a13ac) {
            ctx->pc = 0x4A13B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A13ACu;
            // 0x4a13b0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A13E8u;
            goto label_4a13e8;
        }
    }
    ctx->pc = 0x4A13B4u;
    // 0x4a13b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a13b8: 0x56e2000b  bnel        $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A13B8u;
    {
        const bool branch_taken_0x4a13b8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a13b8) {
            ctx->pc = 0x4A13BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A13B8u;
            // 0x4a13bc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A13E8u;
            goto label_4a13e8;
        }
    }
    ctx->pc = 0x4A13C0u;
    // 0x4a13c0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x4a13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4a13c4: 0x50560006  beql        $v0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A13C4u;
    {
        const bool branch_taken_0x4a13c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x4a13c4) {
            ctx->pc = 0x4A13C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A13C4u;
            // 0x4a13c8: 0xafc40000  sw          $a0, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A13E0u;
            goto label_4a13e0;
        }
    }
    ctx->pc = 0x4A13CCu;
    // 0x4a13cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a13d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a13d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a13d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A13D4u;
    {
        const bool branch_taken_0x4a13d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A13D4u;
        // 0x4a13d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a13d4) {
            ctx->pc = 0x4A13E8u;
            goto label_4a13e8;
        }
    }
    ctx->pc = 0x4A13DCu;
    // 0x4a13dc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x4a13dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_4a13e0:
    // 0x4a13e0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x4A13E0u;
    {
        const bool branch_taken_0x4a13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A13E0u;
        // 0x4a13e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a13e0) {
            ctx->pc = 0x4A15C8u;
            goto label_4a15c8;
        }
    }
    ctx->pc = 0x4A13E8u;
label_4a13e8:
    // 0x4a13e8: 0x2e820033  sltiu       $v0, $s4, 0x33
    ctx->pc = 0x4a13e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x4a13ec: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4A13ECu;
    {
        const bool branch_taken_0x4a13ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A13ECu;
        // 0x4a13f0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a13ec) {
            ctx->pc = 0x4A13A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a13a0;
        }
    }
    ctx->pc = 0x4A13F4u;
    // 0x4a13f4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_4a13f8:
    // 0x4a13f8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x4a13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4a13fc: 0x24505f10  addiu       $s0, $v0, 0x5F10
    ctx->pc = 0x4a13fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24336));
    // 0x4a1400: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x4a1400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x4a1404: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a1404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1408:
    // 0x4a1408: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a1408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a140c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a1410: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x4a1410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a1414: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A1414u;
    {
        const bool branch_taken_0x4a1414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1414u;
        // 0x4a1418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1414) {
            ctx->pc = 0x4A1458u;
            goto label_4a1458;
        }
    }
    ctx->pc = 0x4A141Cu;
    // 0x4a141c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a1420: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x4A1420u;
    {
        const bool branch_taken_0x4a1420 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1420u;
        // 0x4a1424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1420) {
            ctx->pc = 0x4A1458u;
            goto label_4a1458;
        }
    }
    ctx->pc = 0x4A1428u;
    // 0x4a1428: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a1428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a142c: 0x5050000a  beql        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A142Cu;
    {
        const bool branch_taken_0x4a142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x4a142c) {
            ctx->pc = 0x4A1430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A142Cu;
            // 0x4a1430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1458u;
            goto label_4a1458;
        }
    }
    ctx->pc = 0x4A1434u;
    // 0x4a1434: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4a1434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4a1438:
    // 0x4a1438: 0x92102b  sltu        $v0, $a0, $s2
    ctx->pc = 0x4a1438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4a143c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A143Cu;
    {
        const bool branch_taken_0x4a143c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A143Cu;
        // 0x4a1440: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a143c) {
            ctx->pc = 0x4A1458u;
            goto label_4a1458;
        }
    }
    ctx->pc = 0x4A1444u;
    // 0x4a1444: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4a1444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x4a1448: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a1448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a144c: 0x5470fffa  bnel        $v1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A144Cu;
    {
        const bool branch_taken_0x4a144c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x4a144c) {
            ctx->pc = 0x4A1450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A144Cu;
            // 0x4a1450: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1438;
        }
    }
    ctx->pc = 0x4A1454u;
    // 0x4a1454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a1454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1458:
    // 0x4a1458: 0x50a0002a  beql        $a1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x4A1458u;
    {
        const bool branch_taken_0x4a1458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1458) {
            ctx->pc = 0x4A145Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A1458u;
            // 0x4a145c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1504u;
            goto label_4a1504;
        }
    }
    ctx->pc = 0x4A1460u;
    // 0x4a1460: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a1460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1464: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a1464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a1468: 0x16e20010  bne         $s7, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A1468u;
    {
        const bool branch_taken_0x4a1468 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1468u;
        // 0x4a146c: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1468) {
            ctx->pc = 0x4A14ACu;
            goto label_4a14ac;
        }
    }
    ctx->pc = 0x4A1470u;
    // 0x4a1470: 0x50b60006  beql        $a1, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A1470u;
    {
        const bool branch_taken_0x4a1470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 22));
        if (branch_taken_0x4a1470) {
            ctx->pc = 0x4A1474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A1470u;
            // 0x4a1474: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A148Cu;
            goto label_4a148c;
        }
    }
    ctx->pc = 0x4A1478u;
    // 0x4a1478: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a1478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a147c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a147cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a1480: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A1480u;
    {
        const bool branch_taken_0x4a1480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1480) {
            ctx->pc = 0x4A14ACu;
            goto label_4a14ac;
        }
    }
    ctx->pc = 0x4A1488u;
    // 0x4a1488: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x4a1488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_4a148c:
    // 0x4a148c: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x4a148cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4a1490: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4a1490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1494: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a1494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1498: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4A1498u;
    SET_GPR_U32(ctx, 31, 0x4A14A0u);
    ctx->pc = 0x4A149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1498u;
    // 0x4a149c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A1498u, 0x4A14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A14A0u;
label_4a14a0:
    // 0x4a14a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a14a4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x4A14A4u;
    {
        const bool branch_taken_0x4a14a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A14A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A14A4u;
        // 0x4a14a8: 0x252100b  movn        $v0, $s2, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a14a4) {
            ctx->pc = 0x4A15C8u;
            goto label_4a15c8;
        }
    }
    ctx->pc = 0x4A14ACu;
label_4a14ac:
    // 0x4a14ac: 0x12530045  beq         $s2, $s3, . + 4 + (0x45 << 2)
    ctx->pc = 0x4A14ACu;
    {
        const bool branch_taken_0x4a14ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x4A14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A14ACu;
        // 0x4a14b0: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a14ac) {
            ctx->pc = 0x4A15C4u;
            goto label_4a15c4;
        }
    }
    ctx->pc = 0x4A14B4u;
    // 0x4a14b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a14b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a14b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4a14b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4a14bc: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x4a14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4a14c0: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x4a14c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a14c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a14c8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4a14c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a14cc: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x4a14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x4a14d0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4a14d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a14d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a14d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a14d8: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x4a14d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4a14dc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4a14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a14e0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x4a14e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a14e4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x4a14e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a14e8: 0x2c2280b  movn        $a1, $s6, $v0
    ctx->pc = 0x4a14e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 22));
    // 0x4a14ec: 0xc12849e  jal         func_4A1278
    ctx->pc = 0x4A14ECu;
    SET_GPR_U32(ctx, 31, 0x4A14F4u);
    ctx->pc = 0x4A14F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A14ECu;
    // 0x4a14f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1278u;
    goto label_4a1278;
    ctx->pc = 0x4A14F4u;
label_4a14f4:
    // 0x4a14f4: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x4a14f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x4a14f8: 0x42980b  movn        $s3, $v0, $v0
    ctx->pc = 0x4a14f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x4a14fc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4a14fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4a1500: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4a1500u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4a1504:
    // 0x4a1504: 0x2e820033  sltiu       $v0, $s4, 0x33
    ctx->pc = 0x4a1504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x4a1508: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x4A1508u;
    {
        const bool branch_taken_0x4a1508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1508u;
        // 0x4a150c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1508) {
            ctx->pc = 0x4A1408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1408;
        }
    }
    ctx->pc = 0x4A1510u;
    // 0x4a1510: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a1510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a1514: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a1518: 0x1262002b  beq         $s3, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x4A1518u;
    {
        const bool branch_taken_0x4a1518 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1518u;
        // 0x4a151c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1518) {
            ctx->pc = 0x4A15C8u;
            goto label_4a15c8;
        }
    }
    ctx->pc = 0x4A1520u;
    // 0x4a1520: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x4A1520u;
    {
        const bool branch_taken_0x4a1520 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1520u;
        // 0x4a1524: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1520) {
            ctx->pc = 0x4A15C8u;
            goto label_4a15c8;
        }
    }
    ctx->pc = 0x4A1528u;
    // 0x4a1528: 0x8f83b84c  lw          $v1, -0x47B4($gp)
    ctx->pc = 0x4a1528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948940)));
    // 0x4a152c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x4a152cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x4a1530: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a1530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4a1534: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4a1534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a1538: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4a1538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a153c: 0x244286d8  addiu       $v0, $v0, -0x7928
    ctx->pc = 0x4a153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936280));
    // 0x4a1540: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4a1540u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4a1544: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a1544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a1548: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x4a1548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a154c: 0xc1297da  jal         func_4A5F68
    ctx->pc = 0x4A154Cu;
    SET_GPR_U32(ctx, 31, 0x4A1554u);
    ctx->pc = 0x4A1550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A154Cu;
    // 0x4a1550: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5F68u, 0x4A154Cu, 0x4A1554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1554u;
label_4a1554:
    // 0x4a1554: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a1554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a1558: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4a1558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a155c: 0xc1297da  jal         func_4A5F68
    ctx->pc = 0x4A155Cu;
    SET_GPR_U32(ctx, 31, 0x4A1564u);
    ctx->pc = 0x4A1560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A155Cu;
    // 0x4a1560: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5F68u, 0x4A155Cu, 0x4A1564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1564u;
label_4a1564:
    // 0x4a1564: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x4a1564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4a1568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a1568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a156c: 0xae16001c  sw          $s6, 0x1C($s0)
    ctx->pc = 0x4a156cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 22));
    // 0x4a1570: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a1570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a1574: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x4A1574u;
    {
        const bool branch_taken_0x4a1574 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1574u;
        // 0x4a1578: 0xae130038  sw          $s3, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1574) {
            ctx->pc = 0x4A15A4u;
            goto label_4a15a4;
        }
    }
    ctx->pc = 0x4A157Cu;
    // 0x4a157c: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x4a157cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x4a1580: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4a1580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1584: 0x0  nop
    ctx->pc = 0x4a1584u;
    // NOP
label_4a1588:
    // 0x4a1588: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a1588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a158c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a158cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4a1590: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4a1590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4a1594: 0xd3102b  sltu        $v0, $a2, $s3
    ctx->pc = 0x4a1594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4a1598: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a1598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a159c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A159Cu;
    {
        const bool branch_taken_0x4a159c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A159Cu;
        // 0x4a15a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a159c) {
            ctx->pc = 0x4A1588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1588;
        }
    }
    ctx->pc = 0x4A15A4u;
label_4a15a4:
    // 0x4a15a4: 0x8f82b84c  lw          $v0, -0x47B4($gp)
    ctx->pc = 0x4a15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948940)));
    // 0x4a15a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4a15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4a15ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a15acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a15b0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A15B0u;
    {
        const bool branch_taken_0x4a15b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A15B0u;
        // 0x4a15b4: 0xaf82b84c  sw          $v0, -0x47B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a15b0) {
            ctx->pc = 0x4A15BCu;
            goto label_4a15bc;
        }
    }
    ctx->pc = 0x4A15B8u;
    // 0x4a15b8: 0xaf80b84c  sw          $zero, -0x47B4($gp)
    ctx->pc = 0x4a15b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948940), GPR_U32(ctx, 0));
label_4a15bc:
    // 0x4a15bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A15BCu;
    {
        const bool branch_taken_0x4a15bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A15C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A15BCu;
        // 0x4a15c0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a15bc) {
            ctx->pc = 0x4A15C8u;
            goto label_4a15c8;
        }
    }
    ctx->pc = 0x4A15C4u;
label_4a15c4:
    // 0x4a15c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a15c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a15c8:
    // 0x4a15c8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x4a15c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4a15cc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x4a15ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4a15d0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x4a15d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4a15d4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x4a15d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4a15d8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x4a15d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a15dc: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x4a15dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a15e0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x4a15e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a15e4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4a15e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a15e8: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x4a15e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a15ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a15ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a15f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A15F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A15F0u;
        // 0x4a15f4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A15F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A15F8u;
    // 0x4a15f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4a15f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4a15fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4a15fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4a1600: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4a1600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4a1604: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a1604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1608: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4a1608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4a160c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4a160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4a1610: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4a1610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4a1614: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4a1614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4a1618: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a1618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4a161c: 0xc12976a  jal         func_4A5DA8
    ctx->pc = 0x4A161Cu;
    SET_GPR_U32(ctx, 31, 0x4A1624u);
    ctx->pc = 0x4A1620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A161Cu;
    // 0x4a1620: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DA8u, 0x4A161Cu, 0x4A1624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1624u;
label_4a1624:
    // 0x4a1624: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A1624u;
    {
        const bool branch_taken_0x4a1624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1624u;
        // 0x4a1628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1624) {
            ctx->pc = 0x4A164Cu;
            goto label_4a164c;
        }
    }
    ctx->pc = 0x4A162Cu;
    // 0x4a162c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x4A162Cu;
    {
        const bool branch_taken_0x4a162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A162Cu;
        // 0x4a1630: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a162c) {
            ctx->pc = 0x4A170Cu;
            goto label_4a170c;
        }
    }
    ctx->pc = 0x4A1634u;
label_4a1634:
    // 0x4a1634: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a1634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a1638: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4A1638u;
    {
        const bool branch_taken_0x4a1638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1638u;
        // 0x4a163c: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1638) {
            ctx->pc = 0x4A168Cu;
            goto label_4a168c;
        }
    }
    ctx->pc = 0x4A1640u;
label_4a1640:
    // 0x4a1640: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a1640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a1644: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4A1644u;
    {
        const bool branch_taken_0x4a1644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1644u;
        // 0x4a1648: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1644) {
            ctx->pc = 0x4A16CCu;
            goto label_4a16cc;
        }
    }
    ctx->pc = 0x4A164Cu;
label_4a164c:
    // 0x4a164c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a164cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4a1650: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a1650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1654: 0x24505f10  addiu       $s0, $v0, 0x5F10
    ctx->pc = 0x4a1654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24336));
    // 0x4a1658: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4a1658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a165c: 0x0  nop
    ctx->pc = 0x4a165cu;
    // NOP
label_4a1660:
    // 0x4a1660: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a1660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1664: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a1664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1668: 0xc1297fc  jal         func_4A5FF0
    ctx->pc = 0x4A1668u;
    SET_GPR_U32(ctx, 31, 0x4A1670u);
    ctx->pc = 0x4A166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1668u;
    // 0x4a166c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FF0u, 0x4A1668u, 0x4A1670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1670u;
label_4a1670:
    // 0x4a1670: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4A1670u;
    {
        const bool branch_taken_0x4a1670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1670u;
        // 0x4a1674: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1670) {
            ctx->pc = 0x4A1634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1634;
        }
    }
    ctx->pc = 0x4A1678u;
    // 0x4a1678: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4a1678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4a167c: 0x2e220033  sltiu       $v0, $s1, 0x33
    ctx->pc = 0x4a167cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x4a1680: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A1680u;
    {
        const bool branch_taken_0x4a1680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1680u;
        // 0x4a1684: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1680) {
            ctx->pc = 0x4A1660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1660;
        }
    }
    ctx->pc = 0x4A1688u;
    // 0x4a1688: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a1688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a168c:
    // 0x4a168c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4a1690: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a1690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1694: 0x24505f10  addiu       $s0, $v0, 0x5F10
    ctx->pc = 0x4a1694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24336));
    // 0x4a1698: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4a1698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a169c: 0x0  nop
    ctx->pc = 0x4a169cu;
    // NOP
label_4a16a0:
    // 0x4a16a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a16a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a16a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a16a8: 0xc1297fc  jal         func_4A5FF0
    ctx->pc = 0x4A16A8u;
    SET_GPR_U32(ctx, 31, 0x4A16B0u);
    ctx->pc = 0x4A16ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A16A8u;
    // 0x4a16ac: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FF0u, 0x4A16A8u, 0x4A16B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A16B0u;
label_4a16b0:
    // 0x4a16b0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4A16B0u;
    {
        const bool branch_taken_0x4a16b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A16B0u;
        // 0x4a16b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a16b0) {
            ctx->pc = 0x4A1640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1640;
        }
    }
    ctx->pc = 0x4A16B8u;
    // 0x4a16b8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4a16b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4a16bc: 0x2e220033  sltiu       $v0, $s1, 0x33
    ctx->pc = 0x4a16bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x4a16c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A16C0u;
    {
        const bool branch_taken_0x4a16c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A16C0u;
        // 0x4a16c4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a16c0) {
            ctx->pc = 0x4A16A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a16a0;
        }
    }
    ctx->pc = 0x4A16C8u;
    // 0x4a16c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a16c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a16cc:
    // 0x4a16cc: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x4A16CCu;
    {
        const bool branch_taken_0x4a16cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A16CCu;
        // 0x4a16d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a16cc) {
            ctx->pc = 0x4A1708u;
            goto label_4a1708;
        }
    }
    ctx->pc = 0x4A16D4u;
    // 0x4a16d4: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x4A16D4u;
    {
        const bool branch_taken_0x4a16d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A16D4u;
        // 0x4a16d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a16d4) {
            ctx->pc = 0x4A1708u;
            goto label_4a1708;
        }
    }
    ctx->pc = 0x4A16DCu;
    // 0x4a16dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a16e0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4a16e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a16e4: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4a16e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a16e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a16e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a16ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a16ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a16f0: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x4a16f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a16f4: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x4a16f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4a16f8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x4a16f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a16fc: 0xc12849e  jal         func_4A1278
    ctx->pc = 0x4A16FCu;
    SET_GPR_U32(ctx, 31, 0x4A1704u);
    ctx->pc = 0x4A1700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A16FCu;
    // 0x4a1700: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1278u;
    goto label_4a1278;
    ctx->pc = 0x4A1704u;
label_4a1704:
    // 0x4a1704: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4a1704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a1708:
    // 0x4a1708: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4a1708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a170c:
    // 0x4a170c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4a170cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a1710: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4a1710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a1714: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4a1714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a1718: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4a1718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a171c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4a171cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a1720: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a1720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a1724: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1724u;
        // 0x4a1728: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A172Cu;
    // 0x4a172c: 0x0  nop
    ctx->pc = 0x4a172cu;
    // NOP
    ctx->pc = 0x4a1730u;
}
