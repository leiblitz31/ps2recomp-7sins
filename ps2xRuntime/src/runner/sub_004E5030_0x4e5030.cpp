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

// Function: sub_004E5030
// Address: 0x4e5030 - 0x4e5070
void sub_004E5030_0x4e5030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5030_0x4e5030");
#endif

    switch (ctx->pc) {
        case 0x4e5038u: goto label_4e5038;
        case 0x4e5048u: goto label_4e5048;
        default: break;
    }

    ctx->pc = 0x4e5030u;

    // 0x4e5030: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5030u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e5034: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5034u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e5038:
    // 0x4e5038: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e5038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e503c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E503Cu;
    {
        const bool branch_taken_0x4e503c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e503c) {
            ctx->pc = 0x4E5040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E503Cu;
            // 0x4e5040: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E5040 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5001D4u;
            return;
        }
    }
    ctx->pc = 0x4E5044u;
    // 0x4e5044: 0x73697773  .word       0x73697773                   # INVALID     $k1, $t1, 0x7773 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5044u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E5044 raw=0x73697773");
label_4e5048:
    // 0x4e5048: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5048u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5048 raw=0x7478742E");
    // 0x4e504c: 0x0  nop
    ctx->pc = 0x4e504cu;
    // NOP
    // 0x4e5050: 0x3f59999a  .word       0x3F59999A                   # lui         $t9, 0x999A # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5050u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x4e5054: 0x3f59999a  .word       0x3F59999A                   # lui         $t9, 0x999A # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5054u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x4e5058: 0x0  nop
    ctx->pc = 0x4e5058u;
    // NOP
    // 0x4e505c: 0x0  nop
    ctx->pc = 0x4e505cu;
    // NOP
    // 0x4e5060: 0x3f933333  .word       0x3F933333                   # lui         $s3, 0x3333 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5060u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x4e5064: 0x3f933333  .word       0x3F933333                   # lui         $s3, 0x3333 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5064u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x4e5068: 0x0  nop
    ctx->pc = 0x4e5068u;
    // NOP
    // 0x4e506c: 0x0  nop
    ctx->pc = 0x4e506cu;
    // NOP
    ctx->pc = 0x4e5070u;
}
