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

// Function: sub_00308530
// Address: 0x308530 - 0x308770
void sub_00308530_0x308530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308530_0x308530");
#endif

    switch (ctx->pc) {
        case 0x30858cu: goto label_30858c;
        case 0x3085a0u: goto label_3085a0;
        case 0x3085c8u: goto label_3085c8;
        case 0x3085e0u: goto label_3085e0;
        case 0x308600u: goto label_308600;
        case 0x308638u: goto label_308638;
        case 0x308640u: goto label_308640;
        case 0x308648u: goto label_308648;
        case 0x308650u: goto label_308650;
        case 0x308660u: goto label_308660;
        case 0x308688u: goto label_308688;
        case 0x3086dcu: goto label_3086dc;
        case 0x3086ecu: goto label_3086ec;
        case 0x3086fcu: goto label_3086fc;
        case 0x308704u: goto label_308704;
        case 0x30870cu: goto label_30870c;
        case 0x308724u: goto label_308724;
        case 0x308740u: goto label_308740;
        default: break;
    }

    ctx->pc = 0x308530u;

    // 0x308530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x308530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x308534: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x308534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x308538: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x308538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x30853c: 0x3c12004f  lui         $s2, 0x4F
    ctx->pc = 0x30853cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    // 0x308540: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x308540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x308544: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x308544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x308548: 0x26512228  addiu       $s1, $s2, 0x2228
    ctx->pc = 0x308548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8744));
    // 0x30854c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x30854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x308550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308554: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x308554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F2230u));
    // 0x308558: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308558u;
    {
        const bool branch_taken_0x308558 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308558u;
        // 0x30855c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308558) {
            ctx->pc = 0x30856Cu;
            goto label_30856c;
        }
    }
    ctx->pc = 0x308560u;
    // 0x308560: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x308560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x308564: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x308564u;
    {
        const bool branch_taken_0x308564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308564u;
        // 0x308568: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308564) {
            ctx->pc = 0x308664u;
            goto label_308664;
        }
    }
    ctx->pc = 0x30856Cu;
label_30856c:
    // 0x30856c: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x30856cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
    // 0x308570: 0xfe402228  sd          $zero, 0x2228($s2)
    ctx->pc = 0x308570u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8744), GPR_U64(ctx, 0));
    // 0x308574: 0x26704200  addiu       $s0, $s3, 0x4200
    ctx->pc = 0x308574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16896));
    // 0x308578: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x308578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x30857c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30857cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308584: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x308584u;
    SET_GPR_U32(ctx, 31, 0x30858Cu);
    ctx->pc = 0x308588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308584u;
    // 0x308588: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x308584u, 0x30858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30858Cu;
label_30858c:
    // 0x30858c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x30858cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x308590: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x308590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x308594: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x308594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x308598: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x308598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x30859c: 0x0  nop
    ctx->pc = 0x30859cu;
    // NOP
label_3085a0:
    // 0x3085a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3085a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3085a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3085a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3085a8: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x3085a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x3085ac: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x3085acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x3085b0: 0x0  nop
    ctx->pc = 0x3085b0u;
    // NOP
    // 0x3085b4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3085B4u;
    {
        const bool branch_taken_0x3085b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3085b4) {
            ctx->pc = 0x3085A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3085a0;
        }
    }
    ctx->pc = 0x3085BCu;
    // 0x3085bc: 0x26624200  addiu       $v0, $s3, 0x4200
    ctx->pc = 0x3085bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16896));
    // 0x3085c0: 0xc0c2600  jal         func_309800
    ctx->pc = 0x3085C0u;
    SET_GPR_U32(ctx, 31, 0x3085C8u);
    ctx->pc = 0x3085C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085C0u;
    // 0x3085c4: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309800u, 0x3085C0u, 0x3085C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3085C8u;
label_3085c8:
    // 0x3085c8: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x3085c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x3085cc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x3085ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3085d0: 0x24a58ad0  addiu       $a1, $a1, -0x7530
    ctx->pc = 0x3085d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937296));
    // 0x3085d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3085d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085d8: 0xc0bf614  jal         func_2FD850
    ctx->pc = 0x3085D8u;
    SET_GPR_U32(ctx, 31, 0x3085E0u);
    ctx->pc = 0x3085DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085D8u;
    // 0x3085dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD850u, 0x3085D8u, 0x3085E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3085E0u;
label_3085e0:
    // 0x3085e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3085e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085e4: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3085E4u;
    {
        const bool branch_taken_0x3085e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3085e4) {
            ctx->pc = 0x3085E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3085E4u;
            // 0x3085e8: 0x26422228  addiu       $v0, $s2, 0x2228 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8744));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3085F8u;
            goto label_3085f8;
        }
    }
    ctx->pc = 0x3085ECu;
    // 0x3085ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3085ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3085f0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3085F0u;
    {
        const bool branch_taken_0x3085f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3085F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085F0u;
        // 0x3085f4: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3085f0) {
            ctx->pc = 0x308664u;
            goto label_308664;
        }
    }
    ctx->pc = 0x3085F8u;
label_3085f8:
    // 0x3085f8: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x3085F8u;
    SET_GPR_U32(ctx, 31, 0x308600u);
    ctx->pc = 0x3085FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085F8u;
    // 0x3085fc: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x3085F8u, 0x308600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308600u;
label_308600:
    // 0x308600: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x308600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x308604: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x308604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308608: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x308608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x30860c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x30860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x308610: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x308610u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x308614: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x308614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x308618: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x308618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x30861c: 0x548025  or          $s0, $v0, $s4
    ctx->pc = 0x30861cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x308620: 0x36100300  ori         $s0, $s0, 0x300
    ctx->pc = 0x308620u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)768);
    // 0x308624: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x308624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x308628: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x308628u;
    {
        const bool branch_taken_0x308628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308628u;
        // 0x30862c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308628) {
            ctx->pc = 0x308640u;
            goto label_308640;
        }
    }
    ctx->pc = 0x308630u;
    // 0x308630: 0xc0c2140  jal         func_308500
    ctx->pc = 0x308630u;
    SET_GPR_U32(ctx, 31, 0x308638u);
    ctx->pc = 0x308634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308630u;
    // 0x308634: 0x36100c80  ori         $s0, $s0, 0xC80 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x308500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308500u, 0x308630u, 0x308638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308638u;
label_308638:
    // 0x308638: 0xc0c2148  jal         func_308520
    ctx->pc = 0x308638u;
    SET_GPR_U32(ctx, 31, 0x308640u);
    ctx->pc = 0x30863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308638u;
    // 0x30863c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x308520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308520u, 0x308638u, 0x308640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308640u;
label_308640:
    // 0x308640: 0xc0c2144  jal         func_308510
    ctx->pc = 0x308640u;
    SET_GPR_U32(ctx, 31, 0x308648u);
    ctx->pc = 0x308644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308640u;
    // 0x308644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308510u, 0x308640u, 0x308648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308648u;
label_308648:
    // 0x308648: 0xc0bf9aa  jal         func_2FE6A8
    ctx->pc = 0x308648u;
    SET_GPR_U32(ctx, 31, 0x308650u);
    ctx->pc = 0x30864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308648u;
    // 0x30864c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE6A8u, 0x308648u, 0x308650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308650u;
label_308650:
    // 0x308650: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x308650u;
    {
        const bool branch_taken_0x308650 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308650u;
        // 0x308654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308650) {
            ctx->pc = 0x308664u;
            goto label_308664;
        }
    }
    ctx->pc = 0x308658u;
    // 0x308658: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x308658u;
    SET_GPR_U32(ctx, 31, 0x308660u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x308658u, 0x308660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308660u;
label_308660:
    // 0x308660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x308660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308664:
    // 0x308664: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x308664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308668: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x308668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30866c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x30866cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308670: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x308670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308674: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x308674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30867c: 0x3e00008  jr          $ra
    ctx->pc = 0x30867Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30867Cu;
        // 0x308680: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30867Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308684u;
    // 0x308684: 0x0  nop
    ctx->pc = 0x308684u;
    // NOP
label_308688:
    // 0x308688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x308688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30868c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x30868cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x308690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308694: 0x3c12004f  lui         $s2, 0x4F
    ctx->pc = 0x308694u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    // 0x308698: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x308698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30869c: 0x26502228  addiu       $s0, $s2, 0x2228
    ctx->pc = 0x30869cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8744));
    // 0x3086a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3086a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3086a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3086a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F2230u));
    // 0x3086a8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3086A8u;
    {
        const bool branch_taken_0x3086a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3086a8) {
            ctx->pc = 0x3086BCu;
            goto label_3086bc;
        }
    }
    ctx->pc = 0x3086B0u;
    // 0x3086b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3086b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3086b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3086B4u;
    {
        const bool branch_taken_0x3086b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3086B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086B4u;
        // 0x3086b8: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086b4) {
            ctx->pc = 0x308728u;
            goto label_308728;
        }
    }
    ctx->pc = 0x3086BCu;
label_3086bc:
    // 0x3086bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3086bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3086c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3086C0u;
    {
        const bool branch_taken_0x3086c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3086c0) {
            ctx->pc = 0x3086D4u;
            goto label_3086d4;
        }
    }
    ctx->pc = 0x3086C8u;
    // 0x3086c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3086c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3086cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3086CCu;
    {
        const bool branch_taken_0x3086cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3086D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086CCu;
        // 0x3086d0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086cc) {
            ctx->pc = 0x308728u;
            goto label_308728;
        }
    }
    ctx->pc = 0x3086D4u;
label_3086d4:
    // 0x3086d4: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x3086D4u;
    SET_GPR_U32(ctx, 31, 0x3086DCu);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x3086D4u, 0x3086DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086DCu;
label_3086dc:
    // 0x3086dc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3086dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3086e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3086e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086e4: 0xc0bf618  jal         func_2FD860
    ctx->pc = 0x3086E4u;
    SET_GPR_U32(ctx, 31, 0x3086ECu);
    ctx->pc = 0x3086E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086E4u;
    // 0x3086e8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD860u, 0x3086E4u, 0x3086ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086ECu;
label_3086ec:
    // 0x3086ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3086ECu;
    {
        const bool branch_taken_0x3086ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3086F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086ECu;
        // 0x3086f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086ec) {
            ctx->pc = 0x308710u;
            goto label_308710;
        }
    }
    ctx->pc = 0x3086F4u;
    // 0x3086f4: 0xc0bf990  jal         func_2FE640
    ctx->pc = 0x3086F4u;
    SET_GPR_U32(ctx, 31, 0x3086FCu);
    ctx->pc = 0x3086F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086F4u;
    // 0x3086f8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE640u, 0x3086F4u, 0x3086FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086FCu;
label_3086fc:
    // 0x3086fc: 0xc0c2144  jal         func_308510
    ctx->pc = 0x3086FCu;
    SET_GPR_U32(ctx, 31, 0x308704u);
    ctx->pc = 0x308700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086FCu;
    // 0x308700: 0x24040c00  addiu       $a0, $zero, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308510u, 0x3086FCu, 0x308704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308704u;
label_308704:
    // 0x308704: 0xc0c2140  jal         func_308500
    ctx->pc = 0x308704u;
    SET_GPR_U32(ctx, 31, 0x30870Cu);
    ctx->pc = 0x308708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308704u;
    // 0x308708: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308500u, 0x308704u, 0x30870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30870Cu;
label_30870c:
    // 0x30870c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_308710:
    // 0x308710: 0xfe402228  sd          $zero, 0x2228($s2)
    ctx->pc = 0x308710u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8744), GPR_U64(ctx, 0));
    // 0x308714: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308714u;
    {
        const bool branch_taken_0x308714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308714u;
        // 0x308718: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308714) {
            ctx->pc = 0x308724u;
            goto label_308724;
        }
    }
    ctx->pc = 0x30871Cu;
    // 0x30871c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x30871Cu;
    SET_GPR_U32(ctx, 31, 0x308724u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x30871Cu, 0x308724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308724u;
label_308724:
    // 0x308724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x308724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308728:
    // 0x308728: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x308728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30872c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x30872cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308730: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x308730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308738: 0x3e00008  jr          $ra
    ctx->pc = 0x308738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308738u;
        // 0x30873c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308740u;
label_308740:
    // 0x308740: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x308740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x308744: 0x8c432230  lw          $v1, 0x2230($v0)
    ctx->pc = 0x308744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F2230u));
    // 0x308748: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x308748u;
    {
        const bool branch_taken_0x308748 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308748u;
        // 0x30874c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308748) {
            ctx->pc = 0x30875Cu;
            goto label_30875c;
        }
    }
    ctx->pc = 0x308750u;
    // 0x308750: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x308750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x308754: 0x3e00008  jr          $ra
    ctx->pc = 0x308754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308754u;
        // 0x308758: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30875Cu;
label_30875c:
    // 0x30875c: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x30875cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x308760: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x308760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x308764: 0x3e00008  jr          $ra
    ctx->pc = 0x308764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308764u;
        // 0x308768: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30876Cu;
    // 0x30876c: 0x0  nop
    ctx->pc = 0x30876cu;
    // NOP
    ctx->pc = 0x308770u;
}
