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

// Function: sub_0049F218
// Address: 0x49f218 - 0x49f290
void sub_0049F218_0x49f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F218_0x49f218");
#endif

    ctx->pc = 0x49f218u;

    // 0x49f218: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x49F218u;
    {
        const bool branch_taken_0x49f218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F218u;
        // 0x49f21c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f218) {
            ctx->pc = 0x49F24Cu;
            goto label_49f24c;
        }
    }
    ctx->pc = 0x49F220u;
    // 0x49f220: 0x2447e988  addiu       $a3, $v0, -0x1678
    ctx->pc = 0x49f220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961544));
    // 0x49f224: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x49f224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x49f228: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x49f228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x49f22c: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x49f22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x49f230: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x49f230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x49f234: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x49f234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49f238: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x49f238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49f23c: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x49f23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49f240: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x49f240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49f244: 0x3e00008  jr          $ra
    ctx->pc = 0x49F244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F244u;
        // 0x49f248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F24Cu;
label_49f24c:
    // 0x49f24c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x49f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x49f250: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x49f250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x49f254: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x49f254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x49f258: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x49f258u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x49f25c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x49f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x49f260: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x49f260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x49f264: 0x2484f390  addiu       $a0, $a0, -0xC70
    ctx->pc = 0x49f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
    // 0x49f268: 0x24a5d268  addiu       $a1, $a1, -0x2D98
    ctx->pc = 0x49f268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955624));
    // 0x49f26c: 0x24c6f3b0  addiu       $a2, $a2, -0xC50
    ctx->pc = 0x49f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964144));
    // 0x49f270: 0x2442f3d0  addiu       $v0, $v0, -0xC30
    ctx->pc = 0x49f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964176));
    // 0x49f274: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x49f274u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E994u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E994u, _value); } while (0);
    // 0x49f278: 0xac640108  sw          $a0, 0x108($v1)
    ctx->pc = 0x49f278u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61E988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E988u, _value); } while (0);
    // 0x49f27c: 0xac65010c  sw          $a1, 0x10C($v1)
    ctx->pc = 0x49f27cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E98Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E98Cu, _value); } while (0);
    // 0x49f280: 0xac660110  sw          $a2, 0x110($v1)
    ctx->pc = 0x49f280u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x61E990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E990u, _value); } while (0);
    // 0x49f284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49f288: 0x3e00008  jr          $ra
    ctx->pc = 0x49F288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F290u;
}
