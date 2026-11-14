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

// Function: sub_00310518
// Address: 0x310518 - 0x3105f8
void sub_00310518_0x310518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310518_0x310518");
#endif

    ctx->pc = 0x310518u;

    // 0x310518: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x310518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x31051c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x31051cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x310520: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x310520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x310524: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x310524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x310528: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x310528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x31052c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31052cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x310530: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x310530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310534: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x310534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x310538: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x310538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31053c: 0x68c2001b  ldl         $v0, 0x1B($a2)
    ctx->pc = 0x31053cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x310540: 0x6cc20014  ldr         $v0, 0x14($a2)
    ctx->pc = 0x310540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x310544: 0x68c30023  ldl         $v1, 0x23($a2)
    ctx->pc = 0x310544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x310548: 0x6cc3001c  ldr         $v1, 0x1C($a2)
    ctx->pc = 0x310548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x31054c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x31054cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310550: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x310550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310554: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x310554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310558: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x310558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31055c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x31055cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310560: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x310560u;
    {
        const bool branch_taken_0x310560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310560u;
        // 0x310564: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310560) {
            ctx->pc = 0x3105ECu;
            goto label_3105ec;
        }
    }
    ctx->pc = 0x310568u;
    // 0x310568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31056c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31056Cu;
    {
        const bool branch_taken_0x31056c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x310570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31056Cu;
        // 0x310570: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31056c) {
            ctx->pc = 0x310588u;
            goto label_310588;
        }
    }
    ctx->pc = 0x310574u;
    // 0x310574: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x310574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x310578: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310578u;
    {
        const bool branch_taken_0x310578 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x31057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310578u;
        // 0x31057c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310578) {
            ctx->pc = 0x3105A8u;
            goto label_3105a8;
        }
    }
    ctx->pc = 0x310580u;
    // 0x310580: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x310580u;
    {
        const bool branch_taken_0x310580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310580) {
            ctx->pc = 0x3105F0u;
            goto label_3105f0;
        }
    }
    ctx->pc = 0x310588u;
label_310588:
    // 0x310588: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x310588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x31058c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x31058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x310590: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x310590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310594: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x310594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310598: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x310598u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x31059c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31059cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3105a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3105A0u;
    {
        const bool branch_taken_0x3105a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3105A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105A0u;
        // 0x3105a4: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105a0) {
            ctx->pc = 0x3105F0u;
            goto label_3105f0;
        }
    }
    ctx->pc = 0x3105A8u;
label_3105a8:
    // 0x3105a8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3105a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3105ac: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x3105acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3105b0: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x3105b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x3105b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3105b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3105b8: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x3105b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3105bc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3105BCu;
    {
        const bool branch_taken_0x3105bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3105C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105BCu;
        // 0x3105c0: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105bc) {
            ctx->pc = 0x3105E4u;
            goto label_3105e4;
        }
    }
    ctx->pc = 0x3105C4u;
    // 0x3105c4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3105c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3105c8: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x3105c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3105cc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3105ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3105d0: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x3105d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3105d4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3105d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3105d8: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3105d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3105dc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x3105dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3105e0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3105e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3105e4:
    // 0x3105e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3105E4u;
    {
        const bool branch_taken_0x3105e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3105E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105E4u;
        // 0x3105e8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105e4) {
            ctx->pc = 0x3105F0u;
            goto label_3105f0;
        }
    }
    ctx->pc = 0x3105ECu;
label_3105ec:
    // 0x3105ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3105ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3105f0:
    // 0x3105f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3105F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3105F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105F0u;
        // 0x3105f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3105F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3105F8u;
}
