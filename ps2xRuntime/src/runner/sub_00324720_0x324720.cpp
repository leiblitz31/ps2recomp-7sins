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

// Function: sub_00324720
// Address: 0x324720 - 0x324808
void sub_00324720_0x324720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324720_0x324720");
#endif

    switch (ctx->pc) {
        case 0x324740u: goto label_324740;
        case 0x324788u: goto label_324788;
        case 0x3247b4u: goto label_3247b4;
        case 0x3247ecu: goto label_3247ec;
        default: break;
    }

    ctx->pc = 0x324720u;

    // 0x324720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x324724: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x324724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x324728: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x324728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32472c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32472cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324730: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x324730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x324734: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x324734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32473c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x32473cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_324740:
    // 0x324740: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x324740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324744: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x324744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x324748: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x324748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x32474c: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x32474cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x324750: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x324750u;
    {
        const bool branch_taken_0x324750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324750u;
        // 0x324754: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324750) {
            ctx->pc = 0x3247C8u;
            goto label_3247c8;
        }
    }
    ctx->pc = 0x324758u;
    // 0x324758: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x324758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32475c: 0x2442b6f0  addiu       $v0, $v0, -0x4910
    ctx->pc = 0x32475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948592));
    // 0x324760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x324760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x324764: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x324764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x324768: 0x800008  jr          $a0
    ctx->pc = 0x324768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x324770u: goto label_324770;
            case 0x324790u: goto label_324790;
            case 0x32479Cu: goto label_32479c;
            case 0x3247BCu: goto label_3247bc;
            case 0x3247C8u: goto label_3247c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324768u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x324770u;
label_324770:
    // 0x324770: 0x2258021  addu        $s0, $s1, $a1
    ctx->pc = 0x324770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x324774: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324778: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x324778u;
    {
        const bool branch_taken_0x324778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x324778) {
            ctx->pc = 0x32477Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324778u;
            // 0x32477c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3247A4u;
            goto label_3247a4;
        }
    }
    ctx->pc = 0x324780u;
    // 0x324780: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x324780u;
    SET_GPR_U32(ctx, 31, 0x324788u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x324780u, 0x324788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324788u;
label_324788:
    // 0x324788: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x324788u;
    {
        const bool branch_taken_0x324788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324788u;
        // 0x32478c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324788) {
            ctx->pc = 0x3247A4u;
            goto label_3247a4;
        }
    }
    ctx->pc = 0x324790u;
label_324790:
    // 0x324790: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x324790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x324794: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x324794u;
    {
        const bool branch_taken_0x324794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324794u;
        // 0x324798: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324794) {
            ctx->pc = 0x3247A4u;
            goto label_3247a4;
        }
    }
    ctx->pc = 0x32479Cu;
label_32479c:
    // 0x32479c: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x32479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3247a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3247a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3247a4:
    // 0x3247a4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3247A4u;
    {
        const bool branch_taken_0x3247a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3247A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247A4u;
        // 0x3247a8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3247a4) {
            ctx->pc = 0x3247CCu;
            goto label_3247cc;
        }
    }
    ctx->pc = 0x3247ACu;
    // 0x3247ac: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x3247ACu;
    SET_GPR_U32(ctx, 31, 0x3247B4u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3247ACu, 0x3247B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3247B4u;
label_3247b4:
    // 0x3247b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3247B4u;
    {
        const bool branch_taken_0x3247b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3247B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247B4u;
        // 0x3247b8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3247b4) {
            ctx->pc = 0x3247CCu;
            goto label_3247cc;
        }
    }
    ctx->pc = 0x3247BCu;
label_3247bc:
    // 0x3247bc: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x3247bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3247c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3247c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3247c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3247c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3247c8:
    // 0x3247c8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x3247c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3247cc:
    // 0x3247cc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x3247ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3247d0: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x3247d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3247d4: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x3247D4u;
    {
        const bool branch_taken_0x3247d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3247D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247D4u;
        // 0x3247d8: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3247d4) {
            ctx->pc = 0x324740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324740;
        }
    }
    ctx->pc = 0x3247DCu;
    // 0x3247dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3247dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3247e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3247e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3247e4: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3247E4u;
    SET_GPR_U32(ctx, 31, 0x3247ECu);
    ctx->pc = 0x3247E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3247E4u;
    // 0x3247e8: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3247E4u, 0x3247ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3247ECu;
label_3247ec:
    // 0x3247ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3247ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3247f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3247f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3247f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3247f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3247f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3247f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3247fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3247fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324800: 0x3e00008  jr          $ra
    ctx->pc = 0x324800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324800u;
        // 0x324804: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324808u;
}
