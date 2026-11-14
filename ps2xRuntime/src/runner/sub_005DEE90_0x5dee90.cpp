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

// Function: sub_005DEE90
// Address: 0x5dee90 - 0x5deeb8
void sub_005DEE90_0x5dee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEE90_0x5dee90");
#endif

    ctx->pc = 0x5dee90u;

    // 0x5dee90: 0x7165725f  .word       0x7165725F                   # INVALID     $t3, $a1, 0x725F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dee90u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x5DEE90 raw=0x7165725F");
    // 0x5dee94: 0x74736575  .word       0x74736575                   # INVALID     $v1, $s3, 0x6575 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dee94u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEE94 raw=0x74736575");
    // 0x5dee98: 0x74536465  .word       0x74536465                   # INVALID     $v0, $s3, 0x6465 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dee98u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEE98 raw=0x74536465");
    // 0x5dee9c: 0x20657461  addi        $a1, $v1, 0x7461
    ctx->pc = 0x5dee9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5deea0: 0x44203d21  .word       0x44203D21                   # dmfc1       $zero, $f7 # 00000521 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5deea0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x21 at 0x5DEEA0 raw=0x44203D21");
    // 0x5deea4: 0x454d4354  .word       0x454D4354                   # INVALID     $t2, $t5, 0x4354 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5deea4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x14 at 0x5DEEA4 raw=0x454D4354");
    // 0x5deea8: 0x5241434d  beql        $s2, $at, . + 4 + (0x434D << 2)
    ctx->pc = 0x5DEEA8u;
    {
        const bool branch_taken_0x5deea8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x5deea8) {
            ctx->pc = 0x5DEEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEEA8u;
            // 0x5deeac: 0x41545344  .word       0x41545344                   # INVALID     $t2, $s4, 0x5344 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5DEEAC raw=0x41545344");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EFBE0u;
            return;
        }
    }
    ctx->pc = 0x5DEEB0u;
    // 0x5deeb0: 0x4e5f4554  .word       0x4E5F4554                   # INVALID     $s2, $ra, 0x4554 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deeb0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEEB0 raw=0x4E5F4554");
    // 0x5deeb4: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5deeb4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5DEEB4 raw=0x004C4C55");
    ctx->pc = 0x5deeb8u;
}
