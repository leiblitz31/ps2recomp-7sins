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

// Function: sub_005E0B10
// Address: 0x5e0b10 - 0x5e0b40
void sub_005E0B10_0x5e0b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005E0B10_0x5e0b10");
#endif

    ctx->pc = 0x5e0b10u;

    // 0x5e0b10: 0x42705f28  .word       0x42705F28                   # INVALID     $s3, $s0, 0x5F28 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5e0b10u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5E0B10 raw=0x42705F28");
    // 0x5e0b14: 0x68737572  ldl         $s3, 0x7572($v1)
    ctx->pc = 0x5e0b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30066); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5e0b18: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5e0b18u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x5e0b1c: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0b1cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E0B1C raw=0x4C4C554E");
    // 0x5e0b20: 0x26262029  addiu       $a2, $s1, 0x2029
    ctx->pc = 0x5e0b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8233));
    // 0x5e0b24: 0x705f2120  .word       0x705F2120                   # madd1       $a0, $v0, $ra # 00000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0b24u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 31); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x5e0b28: 0x73757242  .word       0x73757242                   # INVALID     $k1, $s5, 0x7242 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0b28u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x5e0b2c: 0x493e2d68  .word       0x493E2D68                   # INVALID     $t1, $fp, 0x2D68 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5e0b2cu;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5E0B2C raw=0x493E2D68");
    // 0x5e0b30: 0x72694473  .word       0x72694473                   # INVALID     $s3, $t1, 0x4473 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0b30u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x5E0B30 raw=0x72694473");
    // 0x5e0b34: 0x29287974  slti        $t0, $t1, 0x7974
    ctx->pc = 0x5e0b34u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)31092) ? 1 : 0);
    // 0x5e0b38: 0x0  nop
    ctx->pc = 0x5e0b38u;
    // NOP
    // 0x5e0b3c: 0x0  nop
    ctx->pc = 0x5e0b3cu;
    // NOP
    ctx->pc = 0x5e0b40u;
}
