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

// Function: sub_005DF490
// Address: 0x5df490 - 0x5df4c0
void sub_005DF490_0x5df490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF490_0x5df490");
#endif

    ctx->pc = 0x5df490u;

    // 0x5df490: 0x7265706f  .word       0x7265706F                   # INVALID     $s3, $a1, 0x706F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df490u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DF490 raw=0x7265706F");
    // 0x5df494: 0x726f7461  .word       0x726F7461                   # maddu1      $t6, $s3, $t7 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df494u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 15); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x5df498: 0x7464283d  .word       0x7464283D                   # INVALID     $v1, $a0, 0x283D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df498u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF498 raw=0x7464283D");
    // 0x5df49c: 0x53696e55  beql        $k1, $t1, . + 4 + (0x6E55 << 2)
    ctx->pc = 0x5DF49Cu;
    {
        const bool branch_taken_0x5df49c = (GPR_U64(ctx, 27) == GPR_U64(ctx, 9));
        if (branch_taken_0x5df49c) {
            ctx->pc = 0x5DF4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF49Cu;
            // 0x5df4a0: 0x6e697274  ldr         $t1, 0x7274($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FADF4u;
            return;
        }
    }
    ctx->pc = 0x5DF4A4u;
    // 0x5df4a4: 0x3a202967  xori        $zero, $s1, 0x2967
    ctx->pc = 0x5df4a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)10599);
    // 0x5df4a8: 0x6c756e20  ldr         $s5, 0x6E20($v1)
    ctx->pc = 0x5df4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5df4ac: 0x6f70206c  ldr         $s0, 0x206C($k1)
    ctx->pc = 0x5df4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x5df4b0: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5df4b0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
    // 0x5df4b4: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x5df4b4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5df4b8: 0x0  nop
    ctx->pc = 0x5df4b8u;
    // NOP
    // 0x5df4bc: 0x0  nop
    ctx->pc = 0x5df4bcu;
    // NOP
    ctx->pc = 0x5df4c0u;
}
