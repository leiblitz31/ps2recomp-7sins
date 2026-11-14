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

// Function: sub_004E6AE0
// Address: 0x4e6ae0 - 0x4e6b00
void sub_004E6AE0_0x4e6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6AE0_0x4e6ae0");
#endif

    ctx->pc = 0x4e6ae0u;

    // 0x4e6ae0: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6ae0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6AE0 raw=0x465F474D");
    // 0x4e6ae4: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6ae4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6AE4 raw=0x74686769");
    // 0x4e6ae8: 0x6f445f32  ldr         $a0, 0x5F32($k0)
    ctx->pc = 0x4e6ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 24370); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4e6aec: 0x53656764  beql        $k1, $a1, . + 4 + (0x6764 << 2)
    ctx->pc = 0x4E6AECu;
    {
        const bool branch_taken_0x4e6aec = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e6aec) {
            ctx->pc = 0x4E6AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6AECu;
            // 0x4e6af0: 0x74726174  .word       0x74726174                   # INVALID     $v1, $s2, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6AF0 raw=0x74726174");
            ctx->in_delay_slot = false;
            ctx->pc = 0x500880u;
            return;
        }
    }
    ctx->pc = 0x4E6AF4u;
    // 0x4e6af4: 0x0  nop
    ctx->pc = 0x4e6af4u;
    // NOP
    // 0x4e6af8: 0x0  nop
    ctx->pc = 0x4e6af8u;
    // NOP
    // 0x4e6afc: 0x0  nop
    ctx->pc = 0x4e6afcu;
    // NOP
    ctx->pc = 0x4e6b00u;
}
