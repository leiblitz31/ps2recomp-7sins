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

// Function: sub_005DF4C0
// Address: 0x5df4c0 - 0x5df4f8
void sub_005DF4C0_0x5df4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF4C0_0x5df4c0");
#endif

    ctx->pc = 0x5df4c0u;

    // 0x5df4c0: 0x7265706f  .word       0x7265706F                   # INVALID     $s3, $a1, 0x706F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df4c0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DF4C0 raw=0x7265706F");
    // 0x5df4c4: 0x726f7461  .word       0x726F7461                   # maddu1      $t6, $s3, $t7 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df4c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 15); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x5df4c8: 0x7464283d  .word       0x7464283D                   # INVALID     $v1, $a0, 0x283D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df4c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF4C8 raw=0x7464283D");
    // 0x5df4cc: 0x53696e55  beql        $k1, $t1, . + 4 + (0x6E55 << 2)
    ctx->pc = 0x5DF4CCu;
    {
        const bool branch_taken_0x5df4cc = (GPR_U64(ctx, 27) == GPR_U64(ctx, 9));
        if (branch_taken_0x5df4cc) {
            ctx->pc = 0x5DF4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF4CCu;
            // 0x5df4d0: 0x6e697274  ldr         $t1, 0x7274($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FAE24u;
            return;
        }
    }
    ctx->pc = 0x5DF4D4u;
    // 0x5df4d4: 0x3a202967  xori        $zero, $s1, 0x2967
    ctx->pc = 0x5df4d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)10599);
    // 0x5df4d8: 0x32302520  andi        $s0, $s1, 0x2520
    ctx->pc = 0x5df4d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9504);
    // 0x5df4dc: 0x73692058  .word       0x73692058                   # mult1       $a0, $k1, $t1 # 00000040 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x5df4e0: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df4e0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF4E0 raw=0x746F6E20");
    // 0x5df4e4: 0x206e6120  addi        $t6, $v1, 0x6120
    ctx->pc = 0x5df4e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24864, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5df4e8: 0x49435341  .word       0x49435341                   # INVALID     $t2, $v1, 0x5341 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5df4e8u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DF4E8 raw=0x49435341");
    // 0x5df4ec: 0x68632049  ldl         $v1, 0x2049($v1)
    ctx->pc = 0x5df4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x5df4f0: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df4f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x5df4f4: 0x0  nop
    ctx->pc = 0x5df4f4u;
    // NOP
    ctx->pc = 0x5df4f8u;
}
