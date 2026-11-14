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

// Function: sub_005DF640
// Address: 0x5df640 - 0x5df680
void sub_005DF640_0x5df640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF640_0x5df640");
#endif

    switch (ctx->pc) {
        case 0x5df674u: goto label_5df674;
        default: break;
    }

    ctx->pc = 0x5df640u;

    // 0x5df640: 0x4d637464  .word       0x4D637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df640u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF640 raw=0x4D637464");
    // 0x5df644: 0x3a3a6d65  xori        $k0, $s1, 0x6D65
    ctx->pc = 0x5df644u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)28005);
    // 0x5df648: 0x4d637464  .word       0x4D637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df648u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF648 raw=0x4D637464");
    // 0x5df64c: 0x3a206d65  xori        $zero, $s1, 0x6D65
    ctx->pc = 0x5df64cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)28005);
    // 0x5df650: 0x6f6c6720  ldr         $t4, 0x6720($k1)
    ctx->pc = 0x5df650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x5df654: 0x206c6162  addi        $t4, $v1, 0x6162
    ctx->pc = 0x5df654u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24930, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x5df658: 0x20726176  addi        $s2, $v1, 0x6176
    ctx->pc = 0x5df658u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24950, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x5df65c: 0x4d705f67  .word       0x4D705F67                   # INVALID     $t3, $s0, 0x5F67 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df65cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF65C raw=0x4D705F67");
    // 0x5df660: 0x73206d65  .word       0x73206D65                   # INVALID     $t9, $zero, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df660u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DF660 raw=0x73206D65");
    // 0x5df664: 0x6c756f68  ldr         $s5, 0x6F68($v1)
    ctx->pc = 0x5df664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5df668: 0x65622064  daddiu      $v0, $t3, 0x2064
    ctx->pc = 0x5df668u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
    // 0x5df66c: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df66cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF66C raw=0x4C554E20");
    // 0x5df670: 0x4c  syscall     1
    ctx->pc = 0x5df670u;
    ctx->pc = 0x5DF674u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5df674:
    // 0x5df674: 0x0  nop
    ctx->pc = 0x5df674u;
    // NOP
    // 0x5df678: 0x0  nop
    ctx->pc = 0x5df678u;
    // NOP
    // 0x5df67c: 0x0  nop
    ctx->pc = 0x5df67cu;
    // NOP
    ctx->pc = 0x5df680u;
}
