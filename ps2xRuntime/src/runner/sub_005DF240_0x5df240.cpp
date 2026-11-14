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

// Function: sub_005DF240
// Address: 0x5df240 - 0x5df270
void sub_005DF240_0x5df240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF240_0x5df240");
#endif

    ctx->pc = 0x5df240u;

    // 0x5df240: 0x446d756e  .word       0x446D756E                   # INVALID     $v1, $t5, 0x756E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df240u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x2E at 0x5DF240 raw=0x446D756E");
    // 0x5df244: 0x4f737269  .word       0x4F737269                   # INVALID     $k1, $s3, 0x7269 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df244u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF244 raw=0x4F737269");
    // 0x5df248: 0x69617462  ldl         $at, 0x7462($t3)
    ctx->pc = 0x5df248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29794); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x5df24c: 0x2064656e  addi        $a0, $v1, 0x656E
    ctx->pc = 0x5df24cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25966, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5df250: 0x6e203d3c  ldr         $zero, 0x3D3C($s1)
    ctx->pc = 0x5df250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15676); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5df254: 0x69446d75  ldl         $a0, 0x6D75($t2)
    ctx->pc = 0x5df254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28021); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x5df258: 0x6f547372  ldr         $s4, 0x7372($k0)
    ctx->pc = 0x5df258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29554); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x5df25c: 0x70696b53  .word       0x70696B53                   # mtlo1       $v1 # 00096B40 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df25cu;
    ctx->lo1 = GPR_U64(ctx, 3);
    // 0x5df260: 0x0  nop
    ctx->pc = 0x5df260u;
    // NOP
    // 0x5df264: 0x0  nop
    ctx->pc = 0x5df264u;
    // NOP
    // 0x5df268: 0x0  nop
    ctx->pc = 0x5df268u;
    // NOP
    // 0x5df26c: 0x0  nop
    ctx->pc = 0x5df26cu;
    // NOP
    ctx->pc = 0x5df270u;
}
