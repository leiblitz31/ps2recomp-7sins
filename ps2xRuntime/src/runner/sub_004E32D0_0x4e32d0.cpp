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

// Function: sub_004E32D0
// Address: 0x4e32d0 - 0x4e3300
void sub_004E32D0_0x4e32d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E32D0_0x4e32d0");
#endif

    ctx->pc = 0x4e32d0u;

    // 0x4e32d0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e32d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e32d4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e32d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e32d8: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e32d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e32dc: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E32DCu;
    {
        const bool branch_taken_0x4e32dc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e32dc) {
            ctx->pc = 0x4E32E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E32DCu;
            // 0x4e32e0: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E32E0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE474u;
            return;
        }
    }
    ctx->pc = 0x4E32E4u;
    // 0x4e32e4: 0x67676f6a  daddiu      $a3, $k1, 0x6F6A
    ctx->pc = 0x4e32e4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28522);
    // 0x4e32e8: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e32e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E32E8 raw=0x7478742E");
    // 0x4e32ec: 0x0  nop
    ctx->pc = 0x4e32ecu;
    // NOP
    // 0x4e32f0: 0x0  nop
    ctx->pc = 0x4e32f0u;
    // NOP
    // 0x4e32f4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e32f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
    // 0x4e32f8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e32f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E32F8 raw=0x00000001");
    // 0x4e32fc: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e32fcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    ctx->pc = 0x4e3300u;
}
