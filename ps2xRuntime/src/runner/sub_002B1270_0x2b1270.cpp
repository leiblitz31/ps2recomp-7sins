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

// Function: sub_002B1270
// Address: 0x2b1270 - 0x2b15b0
void sub_002B1270_0x2b1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1270_0x2b1270");
#endif

    switch (ctx->pc) {
        case 0x2b1288u: goto label_2b1288;
        case 0x2b12ecu: goto label_2b12ec;
        case 0x2b130cu: goto label_2b130c;
        case 0x2b134cu: goto label_2b134c;
        case 0x2b1388u: goto label_2b1388;
        case 0x2b13c0u: goto label_2b13c0;
        case 0x2b13fcu: goto label_2b13fc;
        case 0x2b1428u: goto label_2b1428;
        case 0x2b1444u: goto label_2b1444;
        case 0x2b1464u: goto label_2b1464;
        case 0x2b1480u: goto label_2b1480;
        case 0x2b14a0u: goto label_2b14a0;
        case 0x2b14bcu: goto label_2b14bc;
        case 0x2b14d8u: goto label_2b14d8;
        case 0x2b1500u: goto label_2b1500;
        case 0x2b151cu: goto label_2b151c;
        case 0x2b1530u: goto label_2b1530;
        case 0x2b1578u: goto label_2b1578;
        case 0x2b1588u: goto label_2b1588;
        default: break;
    }

    ctx->pc = 0x2b1270u;

    // 0x2b1270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b1274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b1278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b127c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1280: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2B1280u;
    SET_GPR_U32(ctx, 31, 0x2B1288u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2B1280u, 0x2B1288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1288u;
label_2b1288:
    // 0x2b1288: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b1288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b128c: 0x24636520  addiu       $v1, $v1, 0x6520
    ctx->pc = 0x2b128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25888));
    // 0x2b1290: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1294: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b1294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b1298: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b129c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b129cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b12a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b12a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b12a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B12A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B12A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B12ACu;
    // 0x2b12ac: 0x0  nop
    ctx->pc = 0x2b12acu;
    // NOP
    // 0x2b12b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b12b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b12b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b12b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b12b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b12bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b12bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b12c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b12c4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B12C4u;
    {
        const bool branch_taken_0x2b12c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b12c4) {
            ctx->pc = 0x2B130Cu;
            goto label_2b130c;
        }
    }
    ctx->pc = 0x2B12CCu;
    // 0x2b12cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b12d0: 0x24636520  addiu       $v1, $v1, 0x6520
    ctx->pc = 0x2b12d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25888));
    // 0x2b12d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b12d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b12d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b12dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b12dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b12e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b12e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b12e4: 0xc09d150  jal         func_274540
    ctx->pc = 0x2B12E4u;
    SET_GPR_U32(ctx, 31, 0x2B12ECu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2B12E4u, 0x2B12ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B12ECu;
label_2b12ec:
    // 0x2b12ec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b12ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b12f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b12f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b12f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b12f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b12f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B12F8u;
    {
        const bool branch_taken_0x2b12f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b12f8) {
            ctx->pc = 0x2B130Cu;
            goto label_2b130c;
        }
    }
    ctx->pc = 0x2B1300u;
    // 0x2b1300: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b1300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1304: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B1304u;
    SET_GPR_U32(ctx, 31, 0x2B130Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B1304u, 0x2B130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B130Cu;
label_2b130c:
    // 0x2b130c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1314: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b1314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b1318: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1320u;
    // 0x2b1320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b1320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b1324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b1324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b1328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b1328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b132c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b132cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b1330: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2b1330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2b1334: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2b1334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2b1338: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b1338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b133c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2b133cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1340: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2b1340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1344: 0xc09d18c  jal         func_274630
    ctx->pc = 0x2B1344u;
    SET_GPR_U32(ctx, 31, 0x2B134Cu);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x2B1344u, 0x2B134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B134Cu;
label_2b134c:
    // 0x2b134c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b134cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1350: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b1350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b1354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b1358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b135c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b135cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b1360: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1368u;
    // 0x2b1368: 0x0  nop
    ctx->pc = 0x2b1368u;
    // NOP
    // 0x2b136c: 0x0  nop
    ctx->pc = 0x2b136cu;
    // NOP
    // 0x2b1370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b1374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b1378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b137c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b137cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1380: 0xc09d1d8  jal         func_274760
    ctx->pc = 0x2B1380u;
    SET_GPR_U32(ctx, 31, 0x2B1388u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x2B1380u, 0x2B1388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1388u;
label_2b1388:
    // 0x2b1388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b138c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b138cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b1390: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1398u;
    // 0x2b1398: 0x0  nop
    ctx->pc = 0x2b1398u;
    // NOP
    // 0x2b139c: 0x0  nop
    ctx->pc = 0x2b139cu;
    // NOP
    // 0x2b13a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b13a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b13a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b13a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b13a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b13a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b13ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b13acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b13b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b13b4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b13b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b13b8: 0xc09d1e4  jal         func_274790
    ctx->pc = 0x2B13B8u;
    SET_GPR_U32(ctx, 31, 0x2B13C0u);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x2B13B8u, 0x2B13C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B13C0u;
label_2b13c0:
    // 0x2b13c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b13c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b13c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b13c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b13c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B13C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B13C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B13D0u;
    // 0x2b13d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b13d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b13d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b13d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b13d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b13d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b13dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b13dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b13e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b13e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b13e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b13e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b13e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b13e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b13ec: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2b13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2b13f0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2b13f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b13f4: 0xc09d248  jal         func_274920
    ctx->pc = 0x2B13F4u;
    SET_GPR_U32(ctx, 31, 0x2B13FCu);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2B13F4u, 0x2B13FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B13FCu;
label_2b13fc:
    // 0x2b13fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1400: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1400u;
    {
        const bool branch_taken_0x2b1400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b1400) {
            ctx->pc = 0x2B1410u;
            goto label_2b1410;
        }
    }
    ctx->pc = 0x2B1408u;
    // 0x2b1408: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2B1408u;
    {
        const bool branch_taken_0x2b1408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1408) {
            ctx->pc = 0x2B1588u;
            goto label_2b1588;
        }
    }
    ctx->pc = 0x2B1410u;
label_2b1410:
    // 0x2b1410: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b1414: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2b1414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2b1418: 0x240504b6  addiu       $a1, $zero, 0x4B6
    ctx->pc = 0x2b1418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1206));
    // 0x2b141c: 0x2786a488  addiu       $a2, $gp, -0x5B78
    ctx->pc = 0x2b141cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943880));
    // 0x2b1420: 0xc041a50  jal         func_106940
    ctx->pc = 0x2B1420u;
    SET_GPR_U32(ctx, 31, 0x2B1428u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2B1420u, 0x2B1428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1428u;
label_2b1428:
    // 0x2b1428: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b1428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b142c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b1430: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2b1430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2b1434: 0x240504b7  addiu       $a1, $zero, 0x4B7
    ctx->pc = 0x2b1434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1207));
    // 0x2b1438: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b143c: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2B143Cu;
    SET_GPR_U32(ctx, 31, 0x2B1444u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B143Cu, 0x2B1444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1444u;
label_2b1444:
    // 0x2b1444: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2b1444u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b1448: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2b1448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b144c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1450: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b1450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1454: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2b1454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2b1458: 0x240504b8  addiu       $a1, $zero, 0x4B8
    ctx->pc = 0x2b1458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1208));
    // 0x2b145c: 0xc042090  jal         func_108240
    ctx->pc = 0x2B145Cu;
    SET_GPR_U32(ctx, 31, 0x2B1464u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2B145Cu, 0x2B1464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1464u;
label_2b1464:
    // 0x2b1464: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2b1464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2b1468: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b1468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b146c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b146cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1470: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2b1470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2b1474: 0x240504b9  addiu       $a1, $zero, 0x4B9
    ctx->pc = 0x2b1474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1209));
    // 0x2b1478: 0xc042090  jal         func_108240
    ctx->pc = 0x2B1478u;
    SET_GPR_U32(ctx, 31, 0x2B1480u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2B1478u, 0x2B1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1480u;
label_2b1480:
    // 0x2b1480: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2b1480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2b1484: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2b1484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b1488: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2b1488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2b148c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b148cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1490: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2b1490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2b1494: 0x240504ba  addiu       $a1, $zero, 0x4BA
    ctx->pc = 0x2b1494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1210));
    // 0x2b1498: 0xc042090  jal         func_108240
    ctx->pc = 0x2B1498u;
    SET_GPR_U32(ctx, 31, 0x2B14A0u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2B1498u, 0x2B14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B14A0u;
label_2b14a0:
    // 0x2b14a0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2b14a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2b14a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b14a8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2b14a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2b14ac: 0x240504bb  addiu       $a1, $zero, 0x4BB
    ctx->pc = 0x2b14acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1211));
    // 0x2b14b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b14b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b14b4: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2B14B4u;
    SET_GPR_U32(ctx, 31, 0x2B14BCu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B14B4u, 0x2B14BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B14BCu;
label_2b14bc:
    // 0x2b14bc: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2b14bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b14c0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b14c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b14c4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2b14c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2b14c8: 0x240504bc  addiu       $a1, $zero, 0x4BC
    ctx->pc = 0x2b14c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1212));
    // 0x2b14cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b14ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b14d0: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2B14D0u;
    SET_GPR_U32(ctx, 31, 0x2B14D8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2B14D0u, 0x2B14D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B14D8u;
label_2b14d8:
    // 0x2b14d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b14d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14dc: 0x1680000a  bnez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2B14DCu;
    {
        const bool branch_taken_0x2b14dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b14dc) {
            ctx->pc = 0x2B1508u;
            goto label_2b1508;
        }
    }
    ctx->pc = 0x2B14E4u;
    // 0x2b14e4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2b14e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2b14e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b14e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14ec: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x2b14ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b14f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b14f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b14f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14f8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x2B14F8u;
    SET_GPR_U32(ctx, 31, 0x2B1500u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x2B14F8u, 0x2B1500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1500u;
label_2b1500:
    // 0x2b1500: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B1500u;
    {
        const bool branch_taken_0x2b1500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1500) {
            ctx->pc = 0x2B1578u;
            goto label_2b1578;
        }
    }
    ctx->pc = 0x2B1508u;
label_2b1508:
    // 0x2b1508: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b1508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b150c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2b150cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2b1510: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2b1510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b1514: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B1514u;
    SET_GPR_U32(ctx, 31, 0x2B151Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B1514u, 0x2B151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B151Cu;
label_2b151c:
    // 0x2b151c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b151cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1520: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2b1520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2b1524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b1524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1528: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2B1528u;
    SET_GPR_U32(ctx, 31, 0x2B1530u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2B1528u, 0x2B1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1530u;
label_2b1530:
    // 0x2b1530: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x2b1530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2b1534: 0x27a20078  addiu       $v0, $sp, 0x78
    ctx->pc = 0x2b1534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2b1538: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b1538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b153c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1540: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b1540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1544: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2b1544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b1548: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b1548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b154c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b154cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b1550: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2b1550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2b1554: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b1554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1558: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x2b1558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b155c: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x2b155cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2b1560: 0xc7ad0088  lwc1        $f13, 0x88($sp)
    ctx->pc = 0x2b1560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b1564: 0xc7ae0084  lwc1        $f14, 0x84($sp)
    ctx->pc = 0x2b1564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2b1568: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b1568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b156c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2b156cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1570: 0xc08f6e4  jal         func_23DB90
    ctx->pc = 0x2B1570u;
    SET_GPR_U32(ctx, 31, 0x2B1578u);
    ctx->pc = 0x23DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB90u, 0x2B1570u, 0x2B1578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1578u;
label_2b1578:
    // 0x2b1578: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2b1578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b157c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b157cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b1580: 0xc09d250  jal         func_274940
    ctx->pc = 0x2B1580u;
    SET_GPR_U32(ctx, 31, 0x2B1588u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2B1580u, 0x2B1588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1588u;
label_2b1588:
    // 0x2b1588: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b1588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b158c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b158cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1590: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b1590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b1594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b1598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b159c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b159cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b15a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2b15a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b15a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B15A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B15A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B15ACu;
    // 0x2b15ac: 0x0  nop
    ctx->pc = 0x2b15acu;
    // NOP
    ctx->pc = 0x2b15b0u;
}
