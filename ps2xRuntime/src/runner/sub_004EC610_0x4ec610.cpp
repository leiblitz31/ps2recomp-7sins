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

// Function: sub_004EC610
// Address: 0x4ec610 - 0x4ec630
void sub_004EC610_0x4ec610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC610_0x4ec610");
#endif

    ctx->pc = 0x4ec610u;

    // 0x4ec610: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec614: 0x72662e6c  .word       0x72662E6C                   # INVALID     $s3, $a2, 0x2E6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec614u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4EC614 raw=0x72662E6C");
    // 0x4ec618: 0x6c696761  ldr         $t1, 0x6761($v1)
    ctx->pc = 0x4ec618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26465); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec61c: 0x2e657469  sltiu       $a1, $s3, 0x7469
    ctx->pc = 0x4ec61cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29801) ? 1 : 0);
    // 0x4ec620: 0x736e6573  .word       0x736E6573                   # INVALID     $k1, $t6, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec620u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4EC620 raw=0x736E6573");
    // 0x4ec624: 0x76697469  .word       0x76697469                   # INVALID     $s3, $t1, 0x7469 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec624u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC624 raw=0x76697469");
    // 0x4ec628: 0x797469  .word       0x00797469                   # mtsa        $v1 # 00197440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ec628u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    // 0x4ec62c: 0x0  nop
    ctx->pc = 0x4ec62cu;
    // NOP
    ctx->pc = 0x4ec630u;
}
