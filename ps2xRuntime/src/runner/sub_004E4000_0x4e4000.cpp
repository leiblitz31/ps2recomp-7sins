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

// Function: sub_004E4000
// Address: 0x4e4000 - 0x4e4030
void sub_004E4000_0x4e4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4000_0x4e4000");
#endif

    ctx->pc = 0x4e4000u;

    // 0x4e4000: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e4000u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E4000 raw=0x45435326");
    // 0x4e4004: 0x5253555f  beql        $s2, $s3, . + 4 + (0x555F << 2)
    ctx->pc = 0x4E4004u;
    {
        const bool branch_taken_0x4e4004 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x4e4004) {
            ctx->pc = 0x4E4008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4004u;
            // 0x4e4008: 0x4947534d  .word       0x4947534D                   # INVALID     $t2, $a3, 0x534D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E4008 raw=0x4947534D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9584u;
            return;
        }
    }
    ctx->pc = 0x4E400Cu;
    // 0x4e400c: 0x454d5f44  .word       0x454D5F44                   # INVALID     $t2, $t5, 0x5F44 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e400cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x4 at 0x4E400C raw=0x454D5F44");
    // 0x4e4010: 0x47415353  .word       0x47415353                   # INVALID     $k0, $at, 0x5353 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e4010u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x13 at 0x4E4010 raw=0x47415353");
    // 0x4e4014: 0x434d5f45  .word       0x434D5F45                   # INVALID     $k0, $t5, 0x5F45 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e4014u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E4014 raw=0x434D5F45");
    // 0x4e4018: 0x4e4f435f  .word       0x4E4F435F                   # INVALID     $s2, $t7, 0x435F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4018u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E4018 raw=0x4E4F435F");
    // 0x4e401c: 0x4d524946  .word       0x4D524946                   # INVALID     $t2, $s2, 0x4946 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e401cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E401C raw=0x4D524946");
    // 0x4e4020: 0x5245564f  beql        $s2, $a1, . + 4 + (0x564F << 2)
    ctx->pc = 0x4E4020u;
    {
        const bool branch_taken_0x4e4020 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e4020) {
            ctx->pc = 0x4E4024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4020u;
            // 0x4e4024: 0x54495257  bnel        $v0, $t1, . + 4 + (0x5257 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E4024 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9960u;
            return;
        }
    }
    ctx->pc = 0x4E4028u;
    // 0x4e4028: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4028u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E4028 raw=0x00000045");
    // 0x4e402c: 0x0  nop
    ctx->pc = 0x4e402cu;
    // NOP
    ctx->pc = 0x4e4030u;
}
