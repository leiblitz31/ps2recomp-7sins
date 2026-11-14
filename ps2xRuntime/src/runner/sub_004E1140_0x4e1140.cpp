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

// Function: sub_004E1140
// Address: 0x4e1140 - 0x4e1190
void sub_004E1140_0x4e1140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1140_0x4e1140");
#endif

    ctx->pc = 0x4e1140u;

    // 0x4e1140: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E1140u;
    {
        const bool branch_taken_0x4e1140 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1140) {
            ctx->pc = 0x4E1144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1140u;
            // 0x4e1144: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E1144 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8EC0u;
            return;
        }
    }
    ctx->pc = 0x4E1148u;
    // 0x4e1148: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E1148u;
    {
        const bool branch_taken_0x4e1148 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1148) {
            ctx->pc = 0x4E114Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1148u;
            // 0x4e114c: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E114C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8EC8u;
            return;
        }
    }
    ctx->pc = 0x4E1150u;
    // 0x4e1150: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E1150u;
    {
        const bool branch_taken_0x4e1150 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1150) {
            ctx->pc = 0x4E1154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1150u;
            // 0x4e1154: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E1154 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8ED0u;
            return;
        }
    }
    ctx->pc = 0x4E1158u;
    // 0x4e1158: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E1158u;
    {
        const bool branch_taken_0x4e1158 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1158) {
            ctx->pc = 0x4E115Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1158u;
            // 0x4e115c: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E115C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8ED8u;
            return;
        }
    }
    ctx->pc = 0x4E1160u;
    // 0x4e1160: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E1160u;
    {
        const bool branch_taken_0x4e1160 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1160) {
            ctx->pc = 0x4E1164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1160u;
            // 0x4e1164: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E1164 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8EE0u;
            return;
        }
    }
    ctx->pc = 0x4E1168u;
    // 0x4e1168: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E1168u;
    {
        const bool branch_taken_0x4e1168 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1168) {
            ctx->pc = 0x4E116Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1168u;
            // 0x4e116c: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E116C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8EE8u;
            return;
        }
    }
    ctx->pc = 0x4E1170u;
    // 0x4e1170: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E1170u;
    {
        const bool branch_taken_0x4e1170 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1170) {
            ctx->pc = 0x4E1174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1170u;
            // 0x4e1174: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E1174 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8EF0u;
            return;
        }
    }
    ctx->pc = 0x4E1178u;
    // 0x4e1178: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E1178u;
    {
        const bool branch_taken_0x4e1178 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1178) {
            ctx->pc = 0x4E117Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1178u;
            // 0x4e117c: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E117C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8EF8u;
            return;
        }
    }
    ctx->pc = 0x4E1180u;
    // 0x4e1180: 0x5f5f5f5f  .word       0x5F5F5F5F                   # bgtzl       $k0, . + 4 + (0x5F5F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E1180u;
    {
        const bool branch_taken_0x4e1180 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e1180) {
            ctx->pc = 0x4E1184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1180u;
            // 0x4e1184: 0xa5f5f  .word       0x000A5F5F                   # ddivu       $t3, $zero, $t2 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E1184 raw=0x000A5F5F");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8F00u;
            return;
        }
    }
    ctx->pc = 0x4E1188u;
    // 0x4e1188: 0x0  nop
    ctx->pc = 0x4e1188u;
    // NOP
    // 0x4e118c: 0x0  nop
    ctx->pc = 0x4e118cu;
    // NOP
    ctx->pc = 0x4e1190u;
}
