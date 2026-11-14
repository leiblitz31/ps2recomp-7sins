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

// Function: sub_003076B8
// Address: 0x3076b8 - 0x3078c0
void sub_003076B8_0x3076b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003076B8_0x3076b8");
#endif

    switch (ctx->pc) {
        case 0x307708u: goto label_307708;
        case 0x30772cu: goto label_30772c;
        case 0x307734u: goto label_307734;
        case 0x307748u: goto label_307748;
        case 0x307760u: goto label_307760;
        case 0x307794u: goto label_307794;
        case 0x30779cu: goto label_30779c;
        case 0x3077b0u: goto label_3077b0;
        case 0x3077c8u: goto label_3077c8;
        case 0x307810u: goto label_307810;
        case 0x307818u: goto label_307818;
        case 0x307828u: goto label_307828;
        case 0x307840u: goto label_307840;
        case 0x307868u: goto label_307868;
        case 0x307884u: goto label_307884;
        default: break;
    }

    ctx->pc = 0x3076b8u;

    // 0x3076b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3076b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3076bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3076bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x3076c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3076c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3076c4: 0x2484ad10  addiu       $a0, $a0, -0x52F0
    ctx->pc = 0x3076c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946064));
    // 0x3076c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3076c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3076cc: 0x3c12004f  lui         $s2, 0x4F
    ctx->pc = 0x3076ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    // 0x3076d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3076d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3076d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3076d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3076d8: 0x26501278  addiu       $s0, $s2, 0x1278
    ctx->pc = 0x3076d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4728));
    // 0x3076dc: 0x8e451278  lw          $a1, 0x1278($s2)
    ctx->pc = 0x3076dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F1278u));
    // 0x3076e0: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x3076e0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4F127Cu));
    // 0x3076e4: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x3076e4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4F1280u));
    // 0x3076e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3076e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076ec: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x3076ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3076f0: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3076f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3076f4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3076f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3076f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3076fc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3076fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x307700: 0xc0c0232  jal         func_3008C8
    ctx->pc = 0x307700u;
    SET_GPR_U32(ctx, 31, 0x307708u);
    ctx->pc = 0x307704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307700u;
    // 0x307704: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3008C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3008C8u, 0x307700u, 0x307708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307708u;
label_307708:
    // 0x307708: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x307708u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
    // 0x30770c: 0x40f  sync.p
    ctx->pc = 0x30770cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x307710: 0x8e511278  lw          $s1, 0x1278($s2)
    ctx->pc = 0x307710u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4728)));
    // 0x307714: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x307714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x307718: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x307718u;
    {
        const bool branch_taken_0x307718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307718u;
        // 0x30771c: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307718) {
            ctx->pc = 0x307734u;
            goto label_307734;
        }
    }
    ctx->pc = 0x307720u;
    // 0x307720: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x307720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x307724: 0xc0c0232  jal         func_3008C8
    ctx->pc = 0x307724u;
    SET_GPR_U32(ctx, 31, 0x30772Cu);
    ctx->pc = 0x307728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307724u;
    // 0x307728: 0x2484ad48  addiu       $a0, $a0, -0x52B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3008C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3008C8u, 0x307724u, 0x30772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30772Cu;
label_30772c:
    // 0x30772c: 0xc0c20b6  jal         func_3082D8
    ctx->pc = 0x30772Cu;
    SET_GPR_U32(ctx, 31, 0x307734u);
    ctx->pc = 0x307730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30772Cu;
    // 0x307730: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3082D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3082D8u, 0x30772Cu, 0x307734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307734u;
label_307734:
    // 0x307734: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x307734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x307738: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x307738u;
    {
        const bool branch_taken_0x307738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307738u;
        // 0x30773c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307738) {
            ctx->pc = 0x307770u;
            goto label_307770;
        }
    }
    ctx->pc = 0x307740u;
    // 0x307740: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x307740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x307744: 0x0  nop
    ctx->pc = 0x307744u;
    // NOP
label_307748:
    // 0x307748: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x307748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30774c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x30774cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x307750: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x307750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x307754: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x307754u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x307758: 0xc0c1d76  jal         func_3075D8
    ctx->pc = 0x307758u;
    SET_GPR_U32(ctx, 31, 0x307760u);
    ctx->pc = 0x30775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307758u;
    // 0x30775c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3075D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3075D8u, 0x307758u, 0x307760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307760u;
label_307760:
    // 0x307760: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x307760u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x307764: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x307764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x307768: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x307768u;
    {
        const bool branch_taken_0x307768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307768) {
            ctx->pc = 0x30776Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307768u;
            // 0x30776c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307748;
        }
    }
    ctx->pc = 0x307770u;
label_307770:
    // 0x307770: 0x26501278  addiu       $s0, $s2, 0x1278
    ctx->pc = 0x307770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4728));
    // 0x307774: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x307774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x307778: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x307778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x30777c: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x30777cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x307780: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x307780u;
    {
        const bool branch_taken_0x307780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x307784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307780u;
        // 0x307784: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307780) {
            ctx->pc = 0x3077A0u;
            goto label_3077a0;
        }
    }
    ctx->pc = 0x307788u;
    // 0x307788: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x307788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x30778c: 0xc0c0232  jal         func_3008C8
    ctx->pc = 0x30778Cu;
    SET_GPR_U32(ctx, 31, 0x307794u);
    ctx->pc = 0x307790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30778Cu;
    // 0x307790: 0x2484ad60  addiu       $a0, $a0, -0x52A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3008C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3008C8u, 0x30778Cu, 0x307794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307794u;
label_307794:
    // 0x307794: 0xc0c20b6  jal         func_3082D8
    ctx->pc = 0x307794u;
    SET_GPR_U32(ctx, 31, 0x30779Cu);
    ctx->pc = 0x307798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307794u;
    // 0x307798: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3082D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3082D8u, 0x307794u, 0x30779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30779Cu;
label_30779c:
    // 0x30779c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x30779cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3077a0:
    // 0x3077a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3077A0u;
    {
        const bool branch_taken_0x3077a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3077A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077A0u;
        // 0x3077a4: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077a0) {
            ctx->pc = 0x3077D8u;
            goto label_3077d8;
        }
    }
    ctx->pc = 0x3077A8u;
    // 0x3077a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3077a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3077ac: 0x0  nop
    ctx->pc = 0x3077acu;
    // NOP
label_3077b0:
    // 0x3077b0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x3077b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3077b4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3077b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3077b8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3077b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3077bc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3077bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3077c0: 0xc0c1d76  jal         func_3075D8
    ctx->pc = 0x3077C0u;
    SET_GPR_U32(ctx, 31, 0x3077C8u);
    ctx->pc = 0x3077C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077C0u;
    // 0x3077c4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3075D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3075D8u, 0x3077C0u, 0x3077C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077C8u;
label_3077c8:
    // 0x3077c8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x3077c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x3077cc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3077ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3077d0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3077D0u;
    {
        const bool branch_taken_0x3077d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3077d0) {
            ctx->pc = 0x3077D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3077D0u;
            // 0x3077d4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3077B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3077b0;
        }
    }
    ctx->pc = 0x3077D8u;
label_3077d8:
    // 0x3077d8: 0x26501278  addiu       $s0, $s2, 0x1278
    ctx->pc = 0x3077d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4728));
    // 0x3077dc: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x3077dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x3077e0: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x3077e0u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
    // 0x3077e4: 0x40f  sync.p
    ctx->pc = 0x3077e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3077e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3077e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3077ec: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3077ECu;
    {
        const bool branch_taken_0x3077ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3077ec) {
            ctx->pc = 0x3077F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3077ECu;
            // 0x3077f0: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307854u;
            goto label_307854;
        }
    }
    ctx->pc = 0x3077F4u;
    // 0x3077f4: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x3077f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x3077f8: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x3077f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x3077fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3077FCu;
    {
        const bool branch_taken_0x3077fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077FCu;
        // 0x307800: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077fc) {
            ctx->pc = 0x30781Cu;
            goto label_30781c;
        }
    }
    ctx->pc = 0x307804u;
    // 0x307804: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x307804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x307808: 0xc0c0232  jal         func_3008C8
    ctx->pc = 0x307808u;
    SET_GPR_U32(ctx, 31, 0x307810u);
    ctx->pc = 0x30780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307808u;
    // 0x30780c: 0x2484ad78  addiu       $a0, $a0, -0x5288 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3008C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3008C8u, 0x307808u, 0x307810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307810u;
label_307810:
    // 0x307810: 0xc0c20b6  jal         func_3082D8
    ctx->pc = 0x307810u;
    SET_GPR_U32(ctx, 31, 0x307818u);
    ctx->pc = 0x307814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307810u;
    // 0x307814: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3082D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3082D8u, 0x307810u, 0x307818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307818u;
label_307818:
    // 0x307818: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x307818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_30781c:
    // 0x30781c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30781Cu;
    {
        const bool branch_taken_0x30781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30781Cu;
        // 0x307820: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30781c) {
            ctx->pc = 0x307850u;
            goto label_307850;
        }
    }
    ctx->pc = 0x307824u;
    // 0x307824: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x307824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_307828:
    // 0x307828: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x307828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30782c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x30782cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x307830: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x307830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x307834: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x307834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x307838: 0xc0c1d76  jal         func_3075D8
    ctx->pc = 0x307838u;
    SET_GPR_U32(ctx, 31, 0x307840u);
    ctx->pc = 0x30783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307838u;
    // 0x30783c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3075D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3075D8u, 0x307838u, 0x307840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307840u;
label_307840:
    // 0x307840: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x307840u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x307844: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x307844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x307848: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x307848u;
    {
        const bool branch_taken_0x307848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307848) {
            ctx->pc = 0x30784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307848u;
            // 0x30784c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307828;
        }
    }
    ctx->pc = 0x307850u;
label_307850:
    // 0x307850: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x307850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_307854:
    // 0x307854: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x307854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x307858: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x307858u;
    {
        const bool branch_taken_0x307858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307858u;
        // 0x30785c: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307858) {
            ctx->pc = 0x307890u;
            goto label_307890;
        }
    }
    ctx->pc = 0x307860u;
    // 0x307860: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x307860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x307864: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x307864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_307868:
    // 0x307868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30786c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30786cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307874: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x307874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x307878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30787c: 0xc0c1d76  jal         func_3075D8
    ctx->pc = 0x30787Cu;
    SET_GPR_U32(ctx, 31, 0x307884u);
    ctx->pc = 0x307880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30787Cu;
    // 0x307880: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3075D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3075D8u, 0x30787Cu, 0x307884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307884u;
label_307884:
    // 0x307884: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x307884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x307888: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x307888u;
    {
        const bool branch_taken_0x307888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307888u;
        // 0x30788c: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307888) {
            ctx->pc = 0x307868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307868;
        }
    }
    ctx->pc = 0x307890u;
label_307890:
    // 0x307890: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x307890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307894: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x307894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307898: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x307898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30789c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x30789cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3078a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3078a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3078a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3078A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3078A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078A4u;
        // 0x3078a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3078A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3078ACu;
    // 0x3078ac: 0x0  nop
    ctx->pc = 0x3078acu;
    // NOP
    // 0x3078b0: 0x0  nop
    ctx->pc = 0x3078b0u;
    // NOP
    // 0x3078b4: 0x0  nop
    ctx->pc = 0x3078b4u;
    // NOP
    // 0x3078b8: 0x0  nop
    ctx->pc = 0x3078b8u;
    // NOP
    // 0x3078bc: 0x0  nop
    ctx->pc = 0x3078bcu;
    // NOP
    ctx->pc = 0x3078c0u;
}
