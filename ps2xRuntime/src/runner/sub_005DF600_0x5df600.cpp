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

// Function: sub_005DF600
// Address: 0x5df600 - 0x5df640
void sub_005DF600_0x5df600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF600_0x5df600");
#endif

    ctx->pc = 0x5df600u;

    // 0x5df600: 0x55637464  bnel        $t3, $v1, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DF600u;
    {
        const bool branch_taken_0x5df600 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        if (branch_taken_0x5df600) {
            ctx->pc = 0x5DF604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF600u;
            // 0x5df604: 0x736c6974  .word       0x736C6974                   # psllh       $t5, $t4, 5 # 03600000 <InstrIdType: R5900_MMI> (Delay Slot)
            SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 12), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FC794u;
            return;
        }
    }
    ctx->pc = 0x5DF608u;
    // 0x5df608: 0x65563a3a  daddiu      $s6, $t2, 0x3A3A
    ctx->pc = 0x5df608u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
    // 0x5df60c: 0x6e493363  ldr         $t1, 0x3363($s2)
    ctx->pc = 0x5df60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 13155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5df610: 0x70726574  .word       0x70726574                   # psllh       $t4, $s2, 21 # 00600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df610u;
    SET_GPR_VEC(ctx, 12, _mm_slli_epi16(GPR_VEC(ctx, 18), 21));
    // 0x5df614: 0x74616c6f  .word       0x74616C6F                   # INVALID     $v1, $at, 0x6C6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df614u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF614 raw=0x74616C6F");
    // 0x5df618: 0x203a2065  addi        $k0, $at, 0x2065
    ctx->pc = 0x5df618u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x5df61c: 0x20746f67  addi        $s4, $v1, 0x6F67
    ctx->pc = 0x5df61cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28519, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5df620: 0x6e492061  ldr         $t1, 0x2061($s2)
    ctx->pc = 0x5df620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5df624: 0x696c6176  ldl         $t4, 0x6176($t3)
    ctx->pc = 0x5df624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x5df628: 0x4e282064  .word       0x4E282064                   # INVALID     $s1, $t0, 0x2064 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df628u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF628 raw=0x4E282064");
    // 0x5df62c: 0x294c4c55  slti        $t4, $t2, 0x4C55
    ctx->pc = 0x5df62cu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19541) ? 1 : 0);
    // 0x5df630: 0x72617020  madd1       $t6, $s3, $at
    ctx->pc = 0x5df630u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x5df634: 0x70206d61  .word       0x70206D61                   # maddu1      $t5, $at, $zero # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df634u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 1) * (uint64_t)GPR_U32(ctx, 0); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x5df638: 0x746e696f  .word       0x746E696F                   # INVALID     $v1, $t6, 0x696F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df638u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF638 raw=0x746E696F");
    // 0x5df63c: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df63cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x5df640u;
}
