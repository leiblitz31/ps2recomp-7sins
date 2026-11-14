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

// Function: sub_005DEE00
// Address: 0x5dee00 - 0x5dee40
void sub_005DEE00_0x5dee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEE00_0x5dee00");
#endif

    ctx->pc = 0x5dee00u;

    // 0x5dee00: 0x4d637464  .word       0x4D637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dee00u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEE00 raw=0x4D637464");
    // 0x5dee04: 0x726f6d65  .word       0x726F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dee04u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DEE04 raw=0x726F6D65");
    // 0x5dee08: 0x72614379  .word       0x72614379                   # INVALID     $s3, $at, 0x4379 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dee08u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x5DEE08 raw=0x72614379");
    // 0x5dee0c: 0x473a3a64  .word       0x473A3A64                   # INVALID     $t9, $k0, 0x3A64 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dee0cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x24 at 0x5DEE0C raw=0x473A3A64");
    // 0x5dee10: 0x6e497465  ldr         $t1, 0x7465($s2)
    ctx->pc = 0x5dee10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5dee14: 0x2d206f66  sltiu       $zero, $t1, 0x6F66
    ctx->pc = 0x5dee14u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)28518) ? 1 : 0);
    // 0x5dee18: 0x49203e2d  .word       0x49203E2D                   # INVALID     $t1, $zero, 0x3E2D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5dee18u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DEE18 raw=0x49203E2D");
    // 0x5dee1c: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5dee1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5dee20: 0x28206469  slti        $zero, $at, 0x6469
    ctx->pc = 0x5dee20u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25705) ? 1 : 0);
    // 0x5dee24: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dee24u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEE24 raw=0x4C4C554E");
    // 0x5dee28: 0x6f702029  ldr         $s0, 0x2029($k1)
    ctx->pc = 0x5dee28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x5dee2c: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5dee2cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
    // 0x5dee30: 0x65722072  daddiu      $s2, $t3, 0x2072
    ctx->pc = 0x5dee30u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8306);
    // 0x5dee34: 0x65726566  daddiu      $s2, $t3, 0x6566
    ctx->pc = 0x5dee34u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25958);
    // 0x5dee38: 0x65636e  .word       0x0065636E                   # dsub        $t4, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dee38u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x5dee3c: 0x0  nop
    ctx->pc = 0x5dee3cu;
    // NOP
    ctx->pc = 0x5dee40u;
}
