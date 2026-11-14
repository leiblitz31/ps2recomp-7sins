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

// Function: sub_004110C0
// Address: 0x4110c0 - 0x4111c0
void sub_004110C0_0x4110c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004110C0_0x4110c0");
#endif

    switch (ctx->pc) {
        case 0x411104u: goto label_411104;
        default: break;
    }

    ctx->pc = 0x4110c0u;

    // 0x4110c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4110c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4110c4: 0x2783bdc8  addiu       $v1, $gp, -0x4238
    ctx->pc = 0x4110c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950344));
    // 0x4110c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4110c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4110cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4110ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4110d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4110d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4110d4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x4110d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x4110d8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4110d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4110dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4110dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4110e0: 0xaf83bdcc  sw          $v1, -0x4234($gp)
    ctx->pc = 0x4110e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950348), GPR_U32(ctx, 3));
    // 0x4110e4: 0x2508e7b8  addiu       $t0, $t0, -0x1848
    ctx->pc = 0x4110e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961080));
    // 0x4110e8: 0xaf82ad2c  sw          $v0, -0x52D4($gp)
    ctx->pc = 0x4110e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946092), GPR_U32(ctx, 2));
    // 0x4110ec: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4110ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4110f0: 0xaf83bdc8  sw          $v1, -0x4238($gp)
    ctx->pc = 0x4110f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950344), GPR_U32(ctx, 3));
    // 0x4110f4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4110f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4110f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4110f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4110fc: 0xc1044a2  jal         func_411288
    ctx->pc = 0x4110FCu;
    SET_GPR_U32(ctx, 31, 0x411104u);
    ctx->pc = 0x411100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4110FCu;
    // 0x411100: 0x3c090004  lui         $t1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411288u, 0x4110FCu, 0x411104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411104u;
label_411104:
    // 0x411104: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x411104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411108: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x411108u;
    {
        const bool branch_taken_0x411108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x41110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411108u;
        // 0x41110c: 0xaf85ad30  sw          $a1, -0x52D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946096), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411108) {
            ctx->pc = 0x41111Cu;
            goto label_41111c;
        }
    }
    ctx->pc = 0x411110u;
    // 0x411110: 0xaf80ad2c  sw          $zero, -0x52D4($gp)
    ctx->pc = 0x411110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946092), GPR_U32(ctx, 0));
    // 0x411114: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x411114u;
    {
        const bool branch_taken_0x411114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411114u;
        // 0x411118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411114) {
            ctx->pc = 0x411138u;
            goto label_411138;
        }
    }
    ctx->pc = 0x41111Cu;
label_41111c:
    // 0x41111c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x41111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x411120: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x411120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x411124: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x411124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x411128: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x411128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x41112c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x41112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x411130: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x411130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x411134: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x411134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_411138:
    // 0x411138: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x411138u;
    {
        const bool branch_taken_0x411138 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411138u;
        // 0x41113c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411138) {
            ctx->pc = 0x4111B0u;
            goto label_4111b0;
        }
    }
    ctx->pc = 0x411140u;
    // 0x411140: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x411140u;
    {
        const bool branch_taken_0x411140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x411144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411140u;
        // 0x411144: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411140) {
            ctx->pc = 0x411174u;
            goto label_411174;
        }
    }
    ctx->pc = 0x411148u;
    // 0x411148: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x411148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x41114c: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x41114cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x411150: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x411150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x411154: 0x6a04000f  ldl         $a0, 0xF($s0)
    ctx->pc = 0x411154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x411158: 0x6e040008  ldr         $a0, 0x8($s0)
    ctx->pc = 0x411158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x41115c: 0xb043010f  sdl         $v1, 0x10F($v0)
    ctx->pc = 0x41115cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x411160: 0xb4430108  sdr         $v1, 0x108($v0)
    ctx->pc = 0x411160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x411164: 0xb0440117  sdl         $a0, 0x117($v0)
    ctx->pc = 0x411164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x411168: 0xb4440110  sdr         $a0, 0x110($v0)
    ctx->pc = 0x411168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x41116c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x41116Cu;
    {
        const bool branch_taken_0x41116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41116Cu;
        // 0x411170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41116c) {
            ctx->pc = 0x4111B0u;
            goto label_4111b0;
        }
    }
    ctx->pc = 0x411174u;
label_411174:
    // 0x411174: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x411174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x411178: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x411178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x41117c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x41117cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x411180: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x411180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x411184: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x411184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x411188: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x411188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x41118c: 0x248415f8  addiu       $a0, $a0, 0x15F8
    ctx->pc = 0x41118cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5624));
    // 0x411190: 0x24a5d268  addiu       $a1, $a1, -0x2D98
    ctx->pc = 0x411190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955624));
    // 0x411194: 0x24c61618  addiu       $a2, $a2, 0x1618
    ctx->pc = 0x411194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5656));
    // 0x411198: 0x24421638  addiu       $v0, $v0, 0x1638
    ctx->pc = 0x411198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5688));
    // 0x41119c: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x41119cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E994u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E994u, _value); } while (0);
    // 0x4111a0: 0xac640108  sw          $a0, 0x108($v1)
    ctx->pc = 0x4111a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61E988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E988u, _value); } while (0);
    // 0x4111a4: 0xac65010c  sw          $a1, 0x10C($v1)
    ctx->pc = 0x4111a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E98Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E98Cu, _value); } while (0);
    // 0x4111a8: 0xac660110  sw          $a2, 0x110($v1)
    ctx->pc = 0x4111a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x61E990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E990u, _value); } while (0);
    // 0x4111ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4111acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4111b0:
    // 0x4111b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4111b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4111b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4111b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4111b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4111B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4111BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4111B8u;
        // 0x4111bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4111B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4111C0u;
}
