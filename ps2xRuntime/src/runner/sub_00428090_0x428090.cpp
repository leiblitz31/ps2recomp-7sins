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

// Function: sub_00428090
// Address: 0x428090 - 0x4282a8
void sub_00428090_0x428090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428090_0x428090");
#endif

    switch (ctx->pc) {
        case 0x428090u: goto label_428090;
        case 0x428094u: goto label_428094;
        case 0x428098u: goto label_428098;
        case 0x42809cu: goto label_42809c;
        case 0x4280a0u: goto label_4280a0;
        case 0x4280a4u: goto label_4280a4;
        case 0x4280a8u: goto label_4280a8;
        case 0x4280acu: goto label_4280ac;
        case 0x4280b0u: goto label_4280b0;
        case 0x4280b4u: goto label_4280b4;
        case 0x4280b8u: goto label_4280b8;
        case 0x4280bcu: goto label_4280bc;
        case 0x4280c0u: goto label_4280c0;
        case 0x4280c4u: goto label_4280c4;
        case 0x4280c8u: goto label_4280c8;
        case 0x4280ccu: goto label_4280cc;
        case 0x4280d0u: goto label_4280d0;
        case 0x4280d4u: goto label_4280d4;
        case 0x4280d8u: goto label_4280d8;
        case 0x4280dcu: goto label_4280dc;
        case 0x4280e0u: goto label_4280e0;
        case 0x4280e4u: goto label_4280e4;
        case 0x4280e8u: goto label_4280e8;
        case 0x4280ecu: goto label_4280ec;
        case 0x4280f0u: goto label_4280f0;
        case 0x4280f4u: goto label_4280f4;
        case 0x4280f8u: goto label_4280f8;
        case 0x4280fcu: goto label_4280fc;
        case 0x428100u: goto label_428100;
        case 0x428104u: goto label_428104;
        case 0x428108u: goto label_428108;
        case 0x42810cu: goto label_42810c;
        case 0x428110u: goto label_428110;
        case 0x428114u: goto label_428114;
        case 0x428118u: goto label_428118;
        case 0x42811cu: goto label_42811c;
        case 0x428120u: goto label_428120;
        case 0x428124u: goto label_428124;
        case 0x428128u: goto label_428128;
        case 0x42812cu: goto label_42812c;
        case 0x428130u: goto label_428130;
        case 0x428134u: goto label_428134;
        case 0x428138u: goto label_428138;
        case 0x42813cu: goto label_42813c;
        case 0x428140u: goto label_428140;
        case 0x428144u: goto label_428144;
        case 0x428148u: goto label_428148;
        case 0x42814cu: goto label_42814c;
        case 0x428150u: goto label_428150;
        case 0x428154u: goto label_428154;
        case 0x428158u: goto label_428158;
        case 0x42815cu: goto label_42815c;
        case 0x428160u: goto label_428160;
        case 0x428164u: goto label_428164;
        case 0x428168u: goto label_428168;
        case 0x42816cu: goto label_42816c;
        case 0x428170u: goto label_428170;
        case 0x428174u: goto label_428174;
        case 0x428178u: goto label_428178;
        case 0x42817cu: goto label_42817c;
        case 0x428180u: goto label_428180;
        case 0x428184u: goto label_428184;
        case 0x428188u: goto label_428188;
        case 0x42818cu: goto label_42818c;
        case 0x428190u: goto label_428190;
        case 0x428194u: goto label_428194;
        case 0x428198u: goto label_428198;
        case 0x42819cu: goto label_42819c;
        case 0x4281a0u: goto label_4281a0;
        case 0x4281a4u: goto label_4281a4;
        case 0x4281a8u: goto label_4281a8;
        case 0x4281acu: goto label_4281ac;
        case 0x4281b0u: goto label_4281b0;
        case 0x4281b4u: goto label_4281b4;
        case 0x4281b8u: goto label_4281b8;
        case 0x4281bcu: goto label_4281bc;
        case 0x4281c0u: goto label_4281c0;
        case 0x4281c4u: goto label_4281c4;
        case 0x4281c8u: goto label_4281c8;
        case 0x4281ccu: goto label_4281cc;
        case 0x4281d0u: goto label_4281d0;
        case 0x4281d4u: goto label_4281d4;
        case 0x4281d8u: goto label_4281d8;
        case 0x4281dcu: goto label_4281dc;
        case 0x4281e0u: goto label_4281e0;
        case 0x4281e4u: goto label_4281e4;
        case 0x4281e8u: goto label_4281e8;
        case 0x4281ecu: goto label_4281ec;
        case 0x4281f0u: goto label_4281f0;
        case 0x4281f4u: goto label_4281f4;
        case 0x4281f8u: goto label_4281f8;
        case 0x4281fcu: goto label_4281fc;
        case 0x428200u: goto label_428200;
        case 0x428204u: goto label_428204;
        case 0x428208u: goto label_428208;
        case 0x42820cu: goto label_42820c;
        case 0x428210u: goto label_428210;
        case 0x428214u: goto label_428214;
        case 0x428218u: goto label_428218;
        case 0x42821cu: goto label_42821c;
        case 0x428220u: goto label_428220;
        case 0x428224u: goto label_428224;
        case 0x428228u: goto label_428228;
        case 0x42822cu: goto label_42822c;
        case 0x428230u: goto label_428230;
        case 0x428234u: goto label_428234;
        case 0x428238u: goto label_428238;
        case 0x42823cu: goto label_42823c;
        case 0x428240u: goto label_428240;
        case 0x428244u: goto label_428244;
        case 0x428248u: goto label_428248;
        case 0x42824cu: goto label_42824c;
        case 0x428250u: goto label_428250;
        case 0x428254u: goto label_428254;
        case 0x428258u: goto label_428258;
        case 0x42825cu: goto label_42825c;
        case 0x428260u: goto label_428260;
        case 0x428264u: goto label_428264;
        case 0x428268u: goto label_428268;
        case 0x42826cu: goto label_42826c;
        case 0x428270u: goto label_428270;
        case 0x428274u: goto label_428274;
        case 0x428278u: goto label_428278;
        case 0x42827cu: goto label_42827c;
        case 0x428280u: goto label_428280;
        case 0x428284u: goto label_428284;
        case 0x428288u: goto label_428288;
        case 0x42828cu: goto label_42828c;
        case 0x428290u: goto label_428290;
        case 0x428294u: goto label_428294;
        case 0x428298u: goto label_428298;
        case 0x42829cu: goto label_42829c;
        case 0x4282a0u: goto label_4282a0;
        case 0x4282a4u: goto label_4282a4;
        default: break;
    }

    ctx->pc = 0x428090u;

label_428090:
    // 0x428090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x428090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_428094:
    // 0x428094: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x428094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_428098:
    // 0x428098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x428098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_42809c:
    // 0x42809c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x42809cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4280a0:
    // 0x4280a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4280a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4280a4:
    // 0x4280a4: 0xc109f06  jal         func_427C18
label_4280a8:
    if (ctx->pc == 0x4280A8u) {
        ctx->pc = 0x4280ACu;
        goto label_4280ac;
    }
    ctx->pc = 0x4280A4u;
    SET_GPR_U32(ctx, 31, 0x4280ACu);
    ctx->pc = 0x427C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427C18u, 0x4280A4u, 0x4280ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4280ACu;
label_4280ac:
    // 0x4280ac: 0x8f82be4c  lw          $v0, -0x41B4($gp)
    ctx->pc = 0x4280acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950476)));
label_4280b0:
    // 0x4280b0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4280b4:
    if (ctx->pc == 0x4280B4u) {
        ctx->pc = 0x4280B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4280B0u;
        // 0x4280b4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4280B8u;
        goto label_4280b8;
    }
    ctx->pc = 0x4280B0u;
    {
        const bool branch_taken_0x4280b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4280B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4280B0u;
        // 0x4280b4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4280b0) {
            ctx->pc = 0x428154u;
            goto label_428154;
        }
    }
    ctx->pc = 0x4280B8u;
label_4280b8:
    // 0x4280b8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4280b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
label_4280bc:
    // 0x4280bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4280bcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
label_4280c0:
    // 0x4280c0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4280c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_4280c4:
    // 0x4280c4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4280c8:
    if (ctx->pc == 0x4280C8u) {
        ctx->pc = 0x4280C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4280C4u;
        // 0x4280c8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4280CCu;
        goto label_4280cc;
    }
    ctx->pc = 0x4280C4u;
    {
        const bool branch_taken_0x4280c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4280C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4280C4u;
        // 0x4280c8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4280c4) {
            ctx->pc = 0x428100u;
            goto label_428100;
        }
    }
    ctx->pc = 0x4280CCu;
label_4280cc:
    // 0x4280cc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4280ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_4280d0:
    // 0x4280d0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4280d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
label_4280d4:
    // 0x4280d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4280d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
label_4280d8:
    // 0x4280d8: 0xf  sync
    ctx->pc = 0x4280d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4280dc:
    // 0x4280dc: 0x40f  sync.p
    ctx->pc = 0x4280dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4280e0:
    // 0x4280e0: 0x0  nop
    ctx->pc = 0x4280e0u;
    // NOP
label_4280e4:
    // 0x4280e4: 0x0  nop
    ctx->pc = 0x4280e4u;
    // NOP
label_4280e8:
    // 0x4280e8: 0x0  nop
    ctx->pc = 0x4280e8u;
    // NOP
label_4280ec:
    // 0x4280ec: 0x0  nop
    ctx->pc = 0x4280ecu;
    // NOP
label_4280f0:
    // 0x4280f0: 0x0  nop
    ctx->pc = 0x4280f0u;
    // NOP
label_4280f4:
    // 0x4280f4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
label_4280f8:
    if (ctx->pc == 0x4280F8u) {
        ctx->pc = 0x4280FCu;
        goto label_4280fc;
    }
    ctx->pc = 0x4280F4u;
    {
        const bool branch_taken_0x4280f4 = (false);
        if (branch_taken_0x4280f4) {
            ctx->pc = 0x4280E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4280e0;
        }
    }
    ctx->pc = 0x4280FCu;
label_4280fc:
    // 0x4280fc: 0x0  nop
    ctx->pc = 0x4280fcu;
    // NOP
label_428100:
    // 0x428100: 0x8f87be48  lw          $a3, -0x41B8($gp)
    ctx->pc = 0x428100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950472)));
label_428104:
    // 0x428104: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
label_428108:
    if (ctx->pc == 0x428108u) {
        ctx->pc = 0x428108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428104u;
        // 0x428108: 0x8f82be50  lw          $v0, -0x41B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42810Cu;
        goto label_42810c;
    }
    ctx->pc = 0x428104u;
    {
        const bool branch_taken_0x428104 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x428108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428104u;
        // 0x428108: 0x8f82be50  lw          $v0, -0x41B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428104) {
            ctx->pc = 0x428134u;
            goto label_428134;
        }
    }
    ctx->pc = 0x42810Cu;
label_42810c:
    // 0x42810c: 0x24061121  addiu       $a2, $zero, 0x1121
    ctx->pc = 0x42810cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
label_428110:
    // 0x428110: 0x8f85be44  lw          $a1, -0x41BC($gp)
    ctx->pc = 0x428110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950468)));
label_428114:
    // 0x428114: 0x24030122  addiu       $v1, $zero, 0x122
    ctx->pc = 0x428114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_428118:
    // 0x428118: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x428118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_42811c:
    // 0x42811c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x42811cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_428120:
    // 0x428120: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x428120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_428124:
    // 0x428124: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x428124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_428128:
    // 0x428128: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x428128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_42812c:
    // 0x42812c: 0x10000005  b           . + 4 + (0x5 << 2)
label_428130:
    if (ctx->pc == 0x428130u) {
        ctx->pc = 0x428130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42812Cu;
        // 0x428130: 0xaf84be50  sw          $a0, -0x41B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x428134u;
        goto label_428134;
    }
    ctx->pc = 0x42812Cu;
    {
        const bool branch_taken_0x42812c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42812Cu;
        // 0x428130: 0xaf84be50  sw          $a0, -0x41B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42812c) {
            ctx->pc = 0x428144u;
            goto label_428144;
        }
    }
    ctx->pc = 0x428134u;
label_428134:
    // 0x428134: 0x8f83be4c  lw          $v1, -0x41B4($gp)
    ctx->pc = 0x428134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950476)));
label_428138:
    // 0x428138: 0x8f84be44  lw          $a0, -0x41BC($gp)
    ctx->pc = 0x428138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950468)));
label_42813c:
    // 0x42813c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x42813cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_428140:
    // 0x428140: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x428140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_428144:
    // 0x428144: 0xaf80be44  sw          $zero, -0x41BC($gp)
    ctx->pc = 0x428144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950468), GPR_U32(ctx, 0));
label_428148:
    // 0x428148: 0xaf80be48  sw          $zero, -0x41B8($gp)
    ctx->pc = 0x428148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950472), GPR_U32(ctx, 0));
label_42814c:
    // 0x42814c: 0xaf80be4c  sw          $zero, -0x41B4($gp)
    ctx->pc = 0x42814cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950476), GPR_U32(ctx, 0));
label_428150:
    // 0x428150: 0xaf80be50  sw          $zero, -0x41B0($gp)
    ctx->pc = 0x428150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950480), GPR_U32(ctx, 0));
label_428154:
    // 0x428154: 0x8f83be70  lw          $v1, -0x4190($gp)
    ctx->pc = 0x428154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950512)));
label_428158:
    // 0x428158: 0x2791be58  addiu       $s1, $gp, -0x41A8
    ctx->pc = 0x428158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950488));
label_42815c:
    // 0x42815c: 0x8f82be74  lw          $v0, -0x418C($gp)
    ctx->pc = 0x42815cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950516)));
label_428160:
    // 0x428160: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x428160u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_428164:
    // 0x428164: 0x0  nop
    ctx->pc = 0x428164u;
    // NOP
label_428168:
    // 0x428168: 0x8f83be98  lw          $v1, -0x4168($gp)
    ctx->pc = 0x428168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
label_42816c:
    // 0x42816c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x42816cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_428170:
    // 0x428170: 0x8f82be9c  lw          $v0, -0x4164($gp)
    ctx->pc = 0x428170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950556)));
label_428174:
    // 0x428174: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_428178:
    if (ctx->pc == 0x428178u) {
        ctx->pc = 0x428178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428174u;
        // 0x428178: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42817Cu;
        goto label_42817c;
    }
    ctx->pc = 0x428174u;
    {
        const bool branch_taken_0x428174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x428174) {
            ctx->pc = 0x428178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x428174u;
            // 0x428178: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42818Cu;
            goto label_42818c;
        }
    }
    ctx->pc = 0x42817Cu;
label_42817c:
    // 0x42817c: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x42817cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
label_428180:
    // 0x428180: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_428184:
    if (ctx->pc == 0x428184u) {
        ctx->pc = 0x428184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428180u;
        // 0x428184: 0x8f82ade0  lw          $v0, -0x5220($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x428188u;
        goto label_428188;
    }
    ctx->pc = 0x428180u;
    {
        const bool branch_taken_0x428180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x428184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428180u;
        // 0x428184: 0x8f82ade0  lw          $v0, -0x5220($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428180) {
            ctx->pc = 0x428190u;
            goto label_428190;
        }
    }
    ctx->pc = 0x428188u;
label_428188:
    // 0x428188: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x428188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42818c:
    // 0x42818c: 0x8f82ade0  lw          $v0, -0x5220($gp)
    ctx->pc = 0x42818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946272)));
label_428190:
    // 0x428190: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_428194:
    if (ctx->pc == 0x428194u) {
        ctx->pc = 0x428194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428190u;
        // 0x428194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x428198u;
        goto label_428198;
    }
    ctx->pc = 0x428190u;
    {
        const bool branch_taken_0x428190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x428194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428190u;
        // 0x428194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428190) {
            ctx->pc = 0x4281A0u;
            goto label_4281a0;
        }
    }
    ctx->pc = 0x428198u;
label_428198:
    // 0x428198: 0x40f809  jalr        $v0
label_42819c:
    if (ctx->pc == 0x42819Cu) {
        ctx->pc = 0x42819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428198u;
        // 0x42819c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4281A0u;
        goto label_4281a0;
    }
    ctx->pc = 0x428198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4281A0u);
        ctx->pc = 0x42819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428198u;
        // 0x42819c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x428198u, 0x4281A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4281A0u;
label_4281a0:
    // 0x4281a0: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
label_4281a4:
    if (ctx->pc == 0x4281A4u) {
        ctx->pc = 0x4281A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4281A0u;
        // 0x4281a4: 0x3c100001  lui         $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4281A8u;
        goto label_4281a8;
    }
    ctx->pc = 0x4281A0u;
    {
        const bool branch_taken_0x4281a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4281A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4281A0u;
        // 0x4281a4: 0x3c100001  lui         $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4281a0) {
            ctx->pc = 0x428168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428168;
        }
    }
    ctx->pc = 0x4281A8u;
label_4281a8:
    // 0x4281a8: 0x42000039  di
    ctx->pc = 0x4281a8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_4281ac:
    // 0x4281ac: 0x40f  sync.p
    ctx->pc = 0x4281acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4281b0:
    // 0x4281b0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x4281b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_4281b4:
    // 0x4281b4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4281b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4281b8:
    // 0x4281b8: 0x0  nop
    ctx->pc = 0x4281b8u;
    // NOP
label_4281bc:
    // 0x4281bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4281c0:
    if (ctx->pc == 0x4281C0u) {
        ctx->pc = 0x4281C4u;
        goto label_4281c4;
    }
    ctx->pc = 0x4281BCu;
    {
        const bool branch_taken_0x4281bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4281bc) {
            ctx->pc = 0x4281A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4281a8;
        }
    }
    ctx->pc = 0x4281C4u;
label_4281c4:
    // 0x4281c4: 0x9383be64  lbu         $v1, -0x419C($gp)
    ctx->pc = 0x4281c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
label_4281c8:
    // 0x4281c8: 0x8f84be7c  lw          $a0, -0x4184($gp)
    ctx->pc = 0x4281c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
label_4281cc:
    // 0x4281cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4281ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4281d0:
    // 0x4281d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4281d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4281d4:
    // 0x4281d4: 0xaf84be9c  sw          $a0, -0x4164($gp)
    ctx->pc = 0x4281d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950556), GPR_U32(ctx, 4));
label_4281d8:
    // 0x4281d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4281d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4281dc:
    // 0x4281dc: 0xaf82be98  sw          $v0, -0x4168($gp)
    ctx->pc = 0x4281dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950552), GPR_U32(ctx, 2));
label_4281e0:
    // 0x4281e0: 0x42000038  ei
    ctx->pc = 0x4281e0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_4281e4:
    // 0x4281e4: 0x9382be64  lbu         $v0, -0x419C($gp)
    ctx->pc = 0x4281e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
label_4281e8:
    // 0x4281e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4281e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4281ec:
    // 0x4281ec: 0xa382be64  sb          $v0, -0x419C($gp)
    ctx->pc = 0x4281ecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950500), (uint8_t)GPR_U32(ctx, 2));
label_4281f0:
    // 0x4281f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4281f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4281f4:
    // 0x4281f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4281f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4281f8:
    // 0x4281f8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4281f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4281fc:
    // 0x4281fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4281fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_428200:
    // 0x428200: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x428200u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_428204:
    // 0x428204: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x428204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_428208:
    // 0x428208: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x428208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_42820c:
    // 0x42820c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x42820cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_428210:
    // 0x428210: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x428210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_428214:
    // 0x428214: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x428214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_428218:
    // 0x428218: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x428218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_42821c:
    // 0x42821c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x42821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_428220:
    // 0x428220: 0x8f85be60  lw          $a1, -0x41A0($gp)
    ctx->pc = 0x428220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950496)));
label_428224:
    // 0x428224: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x428224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_428228:
    // 0x428228: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x428228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_42822c:
    // 0x42822c: 0xaf83be74  sw          $v1, -0x418C($gp)
    ctx->pc = 0x42822cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950516), GPR_U32(ctx, 3));
label_428230:
    // 0x428230: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x428230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_428234:
    // 0x428234: 0xaf82be78  sw          $v0, -0x4188($gp)
    ctx->pc = 0x428234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950520), GPR_U32(ctx, 2));
label_428238:
    // 0x428238: 0xaf84be68  sw          $a0, -0x4198($gp)
    ctx->pc = 0x428238u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950504), GPR_U32(ctx, 4));
label_42823c:
    // 0x42823c: 0xaf86be7c  sw          $a2, -0x4184($gp)
    ctx->pc = 0x42823cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 6));
label_428240:
    // 0x428240: 0xaf84be70  sw          $a0, -0x4190($gp)
    ctx->pc = 0x428240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950512), GPR_U32(ctx, 4));
label_428244:
    // 0x428244: 0xaf80be20  sw          $zero, -0x41E0($gp)
    ctx->pc = 0x428244u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 0));
label_428248:
    // 0x428248: 0xaf80be24  sw          $zero, -0x41DC($gp)
    ctx->pc = 0x428248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950436), GPR_U32(ctx, 0));
label_42824c:
    // 0x42824c: 0x9382be64  lbu         $v0, -0x419C($gp)
    ctx->pc = 0x42824cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
label_428250:
    // 0x428250: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x428250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_428254:
    // 0x428254: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x428254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_428258:
    // 0x428258: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x428258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42825c:
    // 0x42825c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x42825cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_428260:
    // 0x428260: 0xc0bf966  jal         func_2FE598
label_428264:
    if (ctx->pc == 0x428264u) {
        ctx->pc = 0x428264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428260u;
        // 0x428264: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x428268u;
        goto label_428268;
    }
    ctx->pc = 0x428260u;
    SET_GPR_U32(ctx, 31, 0x428268u);
    ctx->pc = 0x428264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428260u;
    // 0x428264: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE598u, 0x428260u, 0x428268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428268u;
label_428268:
    // 0x428268: 0x42000039  di
    ctx->pc = 0x428268u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_42826c:
    // 0x42826c: 0x40f  sync.p
    ctx->pc = 0x42826cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_428270:
    // 0x428270: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x428270u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_428274:
    // 0x428274: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x428274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_428278:
    // 0x428278: 0x0  nop
    ctx->pc = 0x428278u;
    // NOP
label_42827c:
    // 0x42827c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_428280:
    if (ctx->pc == 0x428280u) {
        ctx->pc = 0x428284u;
        goto label_428284;
    }
    ctx->pc = 0x42827Cu;
    {
        const bool branch_taken_0x42827c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42827c) {
            ctx->pc = 0x428268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428268;
        }
    }
    ctx->pc = 0x428284u;
label_428284:
    // 0x428284: 0xc109d0e  jal         func_427438
label_428288:
    if (ctx->pc == 0x428288u) {
        ctx->pc = 0x428288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428284u;
        // 0x428288: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42828Cu;
        goto label_42828c;
    }
    ctx->pc = 0x428284u;
    SET_GPR_U32(ctx, 31, 0x42828Cu);
    ctx->pc = 0x428288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428284u;
    // 0x428288: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427438u, 0x428284u, 0x42828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42828Cu;
label_42828c:
    // 0x42828c: 0x42000038  ei
    ctx->pc = 0x42828cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_428290:
    // 0x428290: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x428290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_428294:
    // 0x428294: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x428294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_428298:
    // 0x428298: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x428298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42829c:
    // 0x42829c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42829cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4282a0:
    // 0x4282a0: 0x3e00008  jr          $ra
label_4282a4:
    if (ctx->pc == 0x4282A4u) {
        ctx->pc = 0x4282A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4282A0u;
        // 0x4282a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4282A8u;
        goto label_fallthrough_0x4282a0;
    }
    ctx->pc = 0x4282A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4282A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4282A0u;
        // 0x4282a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4282A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4282a0:
    ctx->pc = 0x4282A8u;
}
