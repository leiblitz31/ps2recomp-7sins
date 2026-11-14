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

// Function: sub_005DF520
// Address: 0x5df520 - 0x5df550
void sub_005DF520_0x5df520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF520_0x5df520");
#endif

    switch (ctx->pc) {
        case 0x5df548u: goto label_5df548;
        default: break;
    }

    ctx->pc = 0x5df520u;

    // 0x5df520: 0x55637464  bnel        $t3, $v1, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DF520u;
    {
        const bool branch_taken_0x5df520 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        if (branch_taken_0x5df520) {
            ctx->pc = 0x5DF524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF520u;
            // 0x5df524: 0x736c6974  .word       0x736C6974                   # psllh       $t5, $t4, 5 # 03600000 <InstrIdType: R5900_MMI> (Delay Slot)
            SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 12), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FC6B4u;
            return;
        }
    }
    ctx->pc = 0x5DF528u;
    // 0x5df528: 0x65473a3a  daddiu      $a3, $t2, 0x3A3A
    ctx->pc = 0x5df528u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
    // 0x5df52c: 0x43524374  .word       0x43524374                   # INVALID     $k0, $s2, 0x4374 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5df52cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5DF52C raw=0x43524374");
    // 0x5df530: 0x3a202928  xori        $zero, $s1, 0x2928
    ctx->pc = 0x5df530u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)10536);
    // 0x5df534: 0x6c754e20  ldr         $s5, 0x4E20($v1)
    ctx->pc = 0x5df534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20000); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5df538: 0x6f70206c  ldr         $s0, 0x206C($k1)
    ctx->pc = 0x5df538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x5df53c: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5df53cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
    // 0x5df540: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x5df540u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5df544: 0x0  nop
    ctx->pc = 0x5df544u;
    // NOP
label_5df548:
    // 0x5df548: 0x0  nop
    ctx->pc = 0x5df548u;
    // NOP
    // 0x5df54c: 0x0  nop
    ctx->pc = 0x5df54cu;
    // NOP
    ctx->pc = 0x5df550u;
}
