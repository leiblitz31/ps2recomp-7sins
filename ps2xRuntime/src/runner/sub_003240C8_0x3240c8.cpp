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

// Function: sub_003240C8
// Address: 0x3240c8 - 0x324180
void sub_003240C8_0x3240c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003240C8_0x3240c8");
#endif

    switch (ctx->pc) {
        case 0x324100u: goto label_324100;
        case 0x324114u: goto label_324114;
        case 0x324148u: goto label_324148;
        case 0x32415cu: goto label_32415c;
        default: break;
    }

    ctx->pc = 0x3240c8u;

    // 0x3240c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3240c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3240cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3240ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3240d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3240d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3240d4: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x3240d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x3240d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3240d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3240dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3240dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3240e0: 0x8c43b1e4  lw          $v1, -0x4E1C($v0)
    ctx->pc = 0x3240e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1E4u));
    // 0x3240e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3240e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3240e8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3240e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3240ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3240ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3240f0: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x3240f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3240f4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3240f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3240f8: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3240F8u;
    SET_GPR_U32(ctx, 31, 0x324100u);
    ctx->pc = 0x3240FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3240F8u;
    // 0x3240fc: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3240F8u, 0x324100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324100u;
label_324100:
    // 0x324100: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x324100u;
    {
        const bool branch_taken_0x324100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324100u;
        // 0x324104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324100) {
            ctx->pc = 0x324120u;
            goto label_324120;
        }
    }
    ctx->pc = 0x324108u;
    // 0x324108: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x324108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32410c: 0xc10480a  jal         func_412028
    ctx->pc = 0x32410Cu;
    SET_GPR_U32(ctx, 31, 0x324114u);
    ctx->pc = 0x324110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32410Cu;
    // 0x324110: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x32410Cu, 0x324114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324114u;
label_324114:
    // 0x324114: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x324114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x324118: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x324118u;
    {
        const bool branch_taken_0x324118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x32411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324118u;
        // 0x32411c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324118) {
            ctx->pc = 0x324128u;
            goto label_324128;
        }
    }
    ctx->pc = 0x324120u;
label_324120:
    // 0x324120: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x324120u;
    {
        const bool branch_taken_0x324120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324120u;
        // 0x324124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324120) {
            ctx->pc = 0x324164u;
            goto label_324164;
        }
    }
    ctx->pc = 0x324128u;
label_324128:
    // 0x324128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32412c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x32412cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324130: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x324130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x324134: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x324134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324138: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x324138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x32413c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x32413cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x324140: 0xc0c8bd0  jal         func_322F40
    ctx->pc = 0x324140u;
    SET_GPR_U32(ctx, 31, 0x324148u);
    ctx->pc = 0x324144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324140u;
    // 0x324144: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F40u, 0x324140u, 0x324148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324148u;
label_324148:
    // 0x324148: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x324148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x32414c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32414Cu;
    {
        const bool branch_taken_0x32414c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32414Cu;
        // 0x324150: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32414c) {
            ctx->pc = 0x324164u;
            goto label_324164;
        }
    }
    ctx->pc = 0x324154u;
    // 0x324154: 0xc0c8e30  jal         func_3238C0
    ctx->pc = 0x324154u;
    SET_GPR_U32(ctx, 31, 0x32415Cu);
    ctx->pc = 0x3238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238C0u, 0x324154u, 0x32415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32415Cu;
label_32415c:
    // 0x32415c: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x32415cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    // 0x324160: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x324160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324164:
    // 0x324164: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x324164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x324168: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x324168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32416c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x32416cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324170: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x324170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324174: 0x3e00008  jr          $ra
    ctx->pc = 0x324174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324174u;
        // 0x324178: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32417Cu;
    // 0x32417c: 0x0  nop
    ctx->pc = 0x32417cu;
    // NOP
    ctx->pc = 0x324180u;
}
