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

// Function: sub_00378418
// Address: 0x378418 - 0x3785a0
void sub_00378418_0x378418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378418_0x378418");
#endif

    switch (ctx->pc) {
        case 0x378458u: goto label_378458;
        case 0x378538u: goto label_378538;
        case 0x378540u: goto label_378540;
        case 0x378548u: goto label_378548;
        case 0x378550u: goto label_378550;
        case 0x378558u: goto label_378558;
        case 0x378560u: goto label_378560;
        case 0x378568u: goto label_378568;
        case 0x378570u: goto label_378570;
        case 0x378578u: goto label_378578;
        case 0x378580u: goto label_378580;
        case 0x378588u: goto label_378588;
        default: break;
    }

    ctx->pc = 0x378418u;

    // 0x378418: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x378418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x37841c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37841cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378420: 0x8f82a8a0  lw          $v0, -0x5760($gp)
    ctx->pc = 0x378420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
    // 0x378424: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x378424u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378428: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x378428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37842c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x37842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x378430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378438: 0x3c0941c6  lui         $t1, 0x41C6
    ctx->pc = 0x378438u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16838 << 16));
    // 0x37843c: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x37843cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378440: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x378440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378444: 0x35294e6d  ori         $t1, $t1, 0x4E6D
    ctx->pc = 0x378444u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)20077);
    // 0x378448: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x378448u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37844c: 0x2410001d  addiu       $s0, $zero, 0x1D
    ctx->pc = 0x37844cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x378450: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x378450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x378454: 0x0  nop
    ctx->pc = 0x378454u;
    // NOP
label_378458:
    // 0x378458: 0x8f82a8a0  lw          $v0, -0x5760($gp)
    ctx->pc = 0x378458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
    // 0x37845c: 0x25450004  addiu       $a1, $t2, 0x4
    ctx->pc = 0x37845cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x378460: 0x25460008  addiu       $a2, $t2, 0x8
    ctx->pc = 0x378460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x378464: 0x2547000c  addiu       $a3, $t2, 0xC
    ctx->pc = 0x378464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x378468: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x378468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x37846c: 0x25480010  addiu       $t0, $t2, 0x10
    ctx->pc = 0x37846cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x378470: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x378470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378474: 0x2610fffb  addiu       $s0, $s0, -0x5
    ctx->pc = 0x378474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x378478: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x378478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x37847c: 0x8c83fffc  lw          $v1, -0x4($a0)
    ctx->pc = 0x37847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x378480: 0x254a0014  addiu       $t2, $t2, 0x14
    ctx->pc = 0x378480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x378484: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x378484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x378488: 0x24633039  addiu       $v1, $v1, 0x3039
    ctx->pc = 0x378488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12345));
    // 0x37848c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x37848cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x378490: 0x8f82a8a0  lw          $v0, -0x5760($gp)
    ctx->pc = 0x378490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
    // 0x378494: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x378494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x378498: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x378498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37849c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x37849cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3784a0: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x3784a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x3784a4: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x3784a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3784a8: 0x24423039  addiu       $v0, $v0, 0x3039
    ctx->pc = 0x3784a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12345));
    // 0x3784ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3784acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3784b0: 0x8f83a8a0  lw          $v1, -0x5760($gp)
    ctx->pc = 0x3784b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
    // 0x3784b4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3784b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3784b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3784b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3784bc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3784bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3784c0: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x3784c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x3784c4: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x3784c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3784c8: 0x24423039  addiu       $v0, $v0, 0x3039
    ctx->pc = 0x3784c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12345));
    // 0x3784cc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3784ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3784d0: 0x8f83a8a0  lw          $v1, -0x5760($gp)
    ctx->pc = 0x3784d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
    // 0x3784d4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3784d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3784d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3784d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3784dc: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3784dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3784e0: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x3784e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
    // 0x3784e4: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x3784e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3784e8: 0x24423039  addiu       $v0, $v0, 0x3039
    ctx->pc = 0x3784e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12345));
    // 0x3784ec: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3784ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3784f0: 0x8f83a8a0  lw          $v1, -0x5760($gp)
    ctx->pc = 0x3784f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
    // 0x3784f4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3784f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3784f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3784f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3784fc: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x3784fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x378500: 0x8d02fffc  lw          $v0, -0x4($t0)
    ctx->pc = 0x378500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x378504: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x378504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x378508: 0x24423039  addiu       $v0, $v0, 0x3039
    ctx->pc = 0x378508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12345));
    // 0x37850c: 0x601ffd2  bgez        $s0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x37850Cu;
    {
        const bool branch_taken_0x37850c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x378510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37850Cu;
        // 0x378510: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37850c) {
            ctx->pc = 0x378458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378458;
        }
    }
    ctx->pc = 0x378514u;
    // 0x378514: 0x8f82a8a0  lw          $v0, -0x5760($gp)
    ctx->pc = 0x378514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
    // 0x378518: 0x2584e880  addiu       $a0, $t4, -0x1780
    ctx->pc = 0x378518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294961280));
    // 0x37851c: 0x24100135  addiu       $s0, $zero, 0x135
    ctx->pc = 0x37851cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    // 0x378520: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x378520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x378524: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x378524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378528: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x378528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x37852c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x37852cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x378530: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x378530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x378534: 0x0  nop
    ctx->pc = 0x378534u;
    // NOP
label_378538:
    // 0x378538: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x378538u;
    SET_GPR_U32(ctx, 31, 0x378540u);
    ctx->pc = 0x37853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378538u;
    // 0x37853c: 0x2610fff6  addiu       $s0, $s0, -0xA (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x378538u, 0x378540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378540u;
label_378540:
    // 0x378540: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x378540u;
    SET_GPR_U32(ctx, 31, 0x378548u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x378540u, 0x378548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378548u;
label_378548:
    // 0x378548: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x378548u;
    SET_GPR_U32(ctx, 31, 0x378550u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x378548u, 0x378550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378550u;
label_378550:
    // 0x378550: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x378550u;
    SET_GPR_U32(ctx, 31, 0x378558u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x378550u, 0x378558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378558u;
label_378558:
    // 0x378558: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x378558u;
    SET_GPR_U32(ctx, 31, 0x378560u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x378558u, 0x378560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378560u;
label_378560:
    // 0x378560: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x378560u;
    SET_GPR_U32(ctx, 31, 0x378568u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x378560u, 0x378568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378568u;
label_378568:
    // 0x378568: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x378568u;
    SET_GPR_U32(ctx, 31, 0x378570u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x378568u, 0x378570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378570u;
label_378570:
    // 0x378570: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x378570u;
    SET_GPR_U32(ctx, 31, 0x378578u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x378570u, 0x378578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378578u;
label_378578:
    // 0x378578: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x378578u;
    SET_GPR_U32(ctx, 31, 0x378580u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x378578u, 0x378580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378580u;
label_378580:
    // 0x378580: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x378580u;
    SET_GPR_U32(ctx, 31, 0x378588u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x378580u, 0x378588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378588u;
label_378588:
    // 0x378588: 0x601ffeb  bgez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x378588u;
    {
        const bool branch_taken_0x378588 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378588u;
        // 0x37858c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378588) {
            ctx->pc = 0x378538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378538;
        }
    }
    ctx->pc = 0x378590u;
    // 0x378590: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x378590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378594: 0x3e00008  jr          $ra
    ctx->pc = 0x378594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378594u;
        // 0x378598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37859Cu;
    // 0x37859c: 0x0  nop
    ctx->pc = 0x37859cu;
    // NOP
    ctx->pc = 0x3785a0u;
}
