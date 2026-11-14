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

// Function: sub_004E27E8
// Address: 0x4e27e8 - 0x4e2800
void sub_004E27E8_0x4e27e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E27E8_0x4e27e8");
#endif

    ctx->pc = 0x4e27e8u;

    // 0x4e27e8: 0x74736f70  .word       0x74736F70                   # INVALID     $v1, $s3, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e27e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E27E8 raw=0x74736F70");
    // 0x4e27ec: 0x6e69632e  ldr         $t1, 0x632E($s3)
    ctx->pc = 0x4e27ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25390); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e27f0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e27f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e27f4: 0x0  nop
    ctx->pc = 0x4e27f4u;
    // NOP
    // 0x4e27f8: 0x0  nop
    ctx->pc = 0x4e27f8u;
    // NOP
    // 0x4e27fc: 0x0  nop
    ctx->pc = 0x4e27fcu;
    // NOP
    ctx->pc = 0x4e2800u;
}
