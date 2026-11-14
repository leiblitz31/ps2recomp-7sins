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

// Function: sub_003D94A8
// Address: 0x3d94a8 - 0x3d9590
void sub_003D94A8_0x3d94a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D94A8_0x3d94a8");
#endif

    switch (ctx->pc) {
        case 0x3d94a8u: goto label_3d94a8;
        case 0x3d94acu: goto label_3d94ac;
        case 0x3d94b0u: goto label_3d94b0;
        case 0x3d94b4u: goto label_3d94b4;
        case 0x3d94b8u: goto label_3d94b8;
        case 0x3d94bcu: goto label_3d94bc;
        case 0x3d94c0u: goto label_3d94c0;
        case 0x3d94c4u: goto label_3d94c4;
        case 0x3d94c8u: goto label_3d94c8;
        case 0x3d94ccu: goto label_3d94cc;
        case 0x3d94d0u: goto label_3d94d0;
        case 0x3d94d4u: goto label_3d94d4;
        case 0x3d94d8u: goto label_3d94d8;
        case 0x3d94dcu: goto label_3d94dc;
        case 0x3d94e0u: goto label_3d94e0;
        case 0x3d94e4u: goto label_3d94e4;
        case 0x3d94e8u: goto label_3d94e8;
        case 0x3d94ecu: goto label_3d94ec;
        case 0x3d94f0u: goto label_3d94f0;
        case 0x3d94f4u: goto label_3d94f4;
        case 0x3d94f8u: goto label_3d94f8;
        case 0x3d94fcu: goto label_3d94fc;
        case 0x3d9500u: goto label_3d9500;
        case 0x3d9504u: goto label_3d9504;
        case 0x3d9508u: goto label_3d9508;
        case 0x3d950cu: goto label_3d950c;
        case 0x3d9510u: goto label_3d9510;
        case 0x3d9514u: goto label_3d9514;
        case 0x3d9518u: goto label_3d9518;
        case 0x3d951cu: goto label_3d951c;
        case 0x3d9520u: goto label_3d9520;
        case 0x3d9524u: goto label_3d9524;
        case 0x3d9528u: goto label_3d9528;
        case 0x3d952cu: goto label_3d952c;
        case 0x3d9530u: goto label_3d9530;
        case 0x3d9534u: goto label_3d9534;
        case 0x3d9538u: goto label_3d9538;
        case 0x3d953cu: goto label_3d953c;
        case 0x3d9540u: goto label_3d9540;
        case 0x3d9544u: goto label_3d9544;
        case 0x3d9548u: goto label_3d9548;
        case 0x3d954cu: goto label_3d954c;
        case 0x3d9550u: goto label_3d9550;
        case 0x3d9554u: goto label_3d9554;
        case 0x3d9558u: goto label_3d9558;
        case 0x3d955cu: goto label_3d955c;
        case 0x3d9560u: goto label_3d9560;
        case 0x3d9564u: goto label_3d9564;
        case 0x3d9568u: goto label_3d9568;
        case 0x3d956cu: goto label_3d956c;
        case 0x3d9570u: goto label_3d9570;
        case 0x3d9574u: goto label_3d9574;
        case 0x3d9578u: goto label_3d9578;
        case 0x3d957cu: goto label_3d957c;
        case 0x3d9580u: goto label_3d9580;
        case 0x3d9584u: goto label_3d9584;
        case 0x3d9588u: goto label_3d9588;
        case 0x3d958cu: goto label_3d958c;
        default: break;
    }

    ctx->pc = 0x3d94a8u;

label_3d94a8:
    // 0x3d94a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d94a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d94ac:
    // 0x3d94ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d94acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3d94b0:
    // 0x3d94b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d94b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d94b4:
    // 0x3d94b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d94b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d94b8:
    // 0x3d94b8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_3d94bc:
    if (ctx->pc == 0x3D94BCu) {
        ctx->pc = 0x3D94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94B8u;
        // 0x3d94bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D94C0u;
        goto label_3d94c0;
    }
    ctx->pc = 0x3D94B8u;
    {
        const bool branch_taken_0x3d94b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94B8u;
        // 0x3d94bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d94b8) {
            ctx->pc = 0x3D94E8u;
            goto label_3d94e8;
        }
    }
    ctx->pc = 0x3D94C0u;
label_3d94c0:
    // 0x3d94c0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3d94c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d94c4:
    // 0x3d94c4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3d94c8:
    if (ctx->pc == 0x3D94C8u) {
        ctx->pc = 0x3D94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94C4u;
        // 0x3d94c8: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D94CCu;
        goto label_3d94cc;
    }
    ctx->pc = 0x3D94C4u;
    {
        const bool branch_taken_0x3d94c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94C4u;
        // 0x3d94c8: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d94c4) {
            ctx->pc = 0x3D94E8u;
            goto label_3d94e8;
        }
    }
    ctx->pc = 0x3D94CCu;
label_3d94cc:
    // 0x3d94cc: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x3d94ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d94d0:
    // 0x3d94d0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_3d94d4:
    if (ctx->pc == 0x3D94D4u) {
        ctx->pc = 0x3D94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94D0u;
        // 0x3d94d4: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D94D8u;
        goto label_3d94d8;
    }
    ctx->pc = 0x3D94D0u;
    {
        const bool branch_taken_0x3d94d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94D0u;
        // 0x3d94d4: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d94d0) {
            ctx->pc = 0x3D94F0u;
            goto label_3d94f0;
        }
    }
    ctx->pc = 0x3D94D8u;
label_3d94d8:
    // 0x3d94d8: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_3d94dc:
    if (ctx->pc == 0x3D94DCu) {
        ctx->pc = 0x3D94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94D8u;
        // 0x3d94dc: 0x2402029a  addiu       $v0, $zero, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D94E0u;
        goto label_3d94e0;
    }
    ctx->pc = 0x3D94D8u;
    {
        const bool branch_taken_0x3d94d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94D8u;
        // 0x3d94dc: 0x2402029a  addiu       $v0, $zero, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d94d8) {
            ctx->pc = 0x3D94F0u;
            goto label_3d94f0;
        }
    }
    ctx->pc = 0x3D94E0u;
label_3d94e0:
    // 0x3d94e0: 0x52220004  beql        $s1, $v0, . + 4 + (0x4 << 2)
label_3d94e4:
    if (ctx->pc == 0x3D94E4u) {
        ctx->pc = 0x3D94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94E0u;
        // 0x3d94e4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D94E8u;
        goto label_3d94e8;
    }
    ctx->pc = 0x3D94E0u;
    {
        const bool branch_taken_0x3d94e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d94e0) {
            ctx->pc = 0x3D94E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D94E0u;
            // 0x3d94e4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D94F4u;
            goto label_3d94f4;
        }
    }
    ctx->pc = 0x3D94E8u;
label_3d94e8:
    // 0x3d94e8: 0x10000024  b           . + 4 + (0x24 << 2)
label_3d94ec:
    if (ctx->pc == 0x3D94ECu) {
        ctx->pc = 0x3D94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94E8u;
        // 0x3d94ec: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D94F0u;
        goto label_3d94f0;
    }
    ctx->pc = 0x3D94E8u;
    {
        const bool branch_taken_0x3d94e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94E8u;
        // 0x3d94ec: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d94e8) {
            ctx->pc = 0x3D957Cu;
            goto label_3d957c;
        }
    }
    ctx->pc = 0x3D94F0u;
label_3d94f0:
    // 0x3d94f0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3d94f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d94f4:
    // 0x3d94f4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3d94f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d94f8:
    // 0x3d94f8: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_3d94fc:
    if (ctx->pc == 0x3D94FCu) {
        ctx->pc = 0x3D94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94F8u;
        // 0x3d94fc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9500u;
        goto label_3d9500;
    }
    ctx->pc = 0x3D94F8u;
    {
        const bool branch_taken_0x3d94f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d94f8) {
            ctx->pc = 0x3D94FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D94F8u;
            // 0x3d94fc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9510u;
            goto label_3d9510;
        }
    }
    ctx->pc = 0x3D9500u;
label_3d9500:
    // 0x3d9500: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3d9500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3d9504:
    // 0x3d9504: 0x40f809  jalr        $v0
label_3d9508:
    if (ctx->pc == 0x3D9508u) {
        ctx->pc = 0x3D9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9504u;
        // 0x3d9508: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D950Cu;
        goto label_3d950c;
    }
    ctx->pc = 0x3D9504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D950Cu);
        ctx->pc = 0x3D9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9504u;
        // 0x3d9508: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9504u, 0x3D950Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D950Cu;
label_3d950c:
    // 0x3d950c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3d950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d9510:
    // 0x3d9510: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x3d9510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3d9514:
    // 0x3d9514: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_3d9518:
    if (ctx->pc == 0x3D9518u) {
        ctx->pc = 0x3D9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9514u;
        // 0x3d9518: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D951Cu;
        goto label_3d951c;
    }
    ctx->pc = 0x3D9514u;
    {
        const bool branch_taken_0x3d9514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9514) {
            ctx->pc = 0x3D9518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9514u;
            // 0x3d9518: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D952Cu;
            goto label_3d952c;
        }
    }
    ctx->pc = 0x3D951Cu;
label_3d951c:
    // 0x3d951c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3d951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3d9520:
    // 0x3d9520: 0x40f809  jalr        $v0
label_3d9524:
    if (ctx->pc == 0x3D9524u) {
        ctx->pc = 0x3D9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9520u;
        // 0x3d9524: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9528u;
        goto label_3d9528;
    }
    ctx->pc = 0x3D9520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D9528u);
        ctx->pc = 0x3D9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9520u;
        // 0x3d9524: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9520u, 0x3D9528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9528u;
label_3d9528:
    // 0x3d9528: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3d9528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d952c:
    // 0x3d952c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x3d952cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_3d9530:
    // 0x3d9530: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_3d9534:
    if (ctx->pc == 0x3D9534u) {
        ctx->pc = 0x3D9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9530u;
        // 0x3d9534: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9538u;
        goto label_3d9538;
    }
    ctx->pc = 0x3D9530u;
    {
        const bool branch_taken_0x3d9530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9530) {
            ctx->pc = 0x3D9534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9530u;
            // 0x3d9534: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9548u;
            goto label_3d9548;
        }
    }
    ctx->pc = 0x3D9538u;
label_3d9538:
    // 0x3d9538: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3d9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3d953c:
    // 0x3d953c: 0x40f809  jalr        $v0
label_3d9540:
    if (ctx->pc == 0x3D9540u) {
        ctx->pc = 0x3D9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D953Cu;
        // 0x3d9540: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9544u;
        goto label_3d9544;
    }
    ctx->pc = 0x3D953Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D9544u);
        ctx->pc = 0x3D9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D953Cu;
        // 0x3d9540: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D953Cu, 0x3D9544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9544u;
label_3d9544:
    // 0x3d9544: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3d9544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d9548:
    // 0x3d9548: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x3d9548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_3d954c:
    // 0x3d954c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_3d9550:
    if (ctx->pc == 0x3D9550u) {
        ctx->pc = 0x3D9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D954Cu;
        // 0x3d9550: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9554u;
        goto label_3d9554;
    }
    ctx->pc = 0x3D954Cu;
    {
        const bool branch_taken_0x3d954c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D954Cu;
        // 0x3d9550: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d954c) {
            ctx->pc = 0x3D9560u;
            goto label_3d9560;
        }
    }
    ctx->pc = 0x3D9554u;
label_3d9554:
    // 0x3d9554: 0x40f809  jalr        $v0
label_3d9558:
    if (ctx->pc == 0x3D9558u) {
        ctx->pc = 0x3D9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9554u;
        // 0x3d9558: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D955Cu;
        goto label_3d955c;
    }
    ctx->pc = 0x3D9554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D955Cu);
        ctx->pc = 0x3D9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9554u;
        // 0x3d9558: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9554u, 0x3D955Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D955Cu;
label_3d955c:
    // 0x3d955c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3d955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3d9560:
    // 0x3d9560: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3d9560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3d9564:
    // 0x3d9564: 0x40f809  jalr        $v0
label_3d9568:
    if (ctx->pc == 0x3D9568u) {
        ctx->pc = 0x3D9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9564u;
        // 0x3d9568: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D956Cu;
        goto label_3d956c;
    }
    ctx->pc = 0x3D9564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D956Cu);
        ctx->pc = 0x3D9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9564u;
        // 0x3d9568: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9564u, 0x3D956Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D956Cu;
label_3d956c:
    // 0x3d956c: 0x3a230071  xori        $v1, $s1, 0x71
    ctx->pc = 0x3d956cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)113);
label_3d9570:
    // 0x3d9570: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3d9570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3d9574:
    // 0x3d9574: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3d9574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3d9578:
    // 0x3d9578: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x3d9578u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_3d957c:
    // 0x3d957c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d957cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9580:
    // 0x3d9580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d9580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9584:
    // 0x3d9584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9588:
    // 0x3d9588: 0x3e00008  jr          $ra
label_3d958c:
    if (ctx->pc == 0x3D958Cu) {
        ctx->pc = 0x3D958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9588u;
        // 0x3d958c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9590u;
        goto label_fallthrough_0x3d9588;
    }
    ctx->pc = 0x3D9588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9588u;
        // 0x3d958c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d9588:
    ctx->pc = 0x3D9590u;
}
