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

// Function: sub_002E1830
// Address: 0x2e1830 - 0x2e19c0
void sub_002E1830_0x2e1830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1830_0x2e1830");
#endif

    switch (ctx->pc) {
        case 0x2e1850u: goto label_2e1850;
        case 0x2e186cu: goto label_2e186c;
        case 0x2e187cu: goto label_2e187c;
        case 0x2e18a8u: goto label_2e18a8;
        case 0x2e18c4u: goto label_2e18c4;
        case 0x2e18d8u: goto label_2e18d8;
        case 0x2e18e4u: goto label_2e18e4;
        case 0x2e18f0u: goto label_2e18f0;
        case 0x2e190cu: goto label_2e190c;
        case 0x2e1920u: goto label_2e1920;
        case 0x2e1934u: goto label_2e1934;
        case 0x2e194cu: goto label_2e194c;
        case 0x2e1960u: goto label_2e1960;
        case 0x2e1998u: goto label_2e1998;
        case 0x2e19a4u: goto label_2e19a4;
        default: break;
    }

    ctx->pc = 0x2e1830u;

    // 0x2e1830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e1834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e1838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e183c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e183cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e1840: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1844: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e1844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e1848: 0xc0b8680  jal         func_2E1A00
    ctx->pc = 0x2E1848u;
    SET_GPR_U32(ctx, 31, 0x2E1850u);
    ctx->pc = 0x2E1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A00u, 0x2E1848u, 0x2E1850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1850u;
label_2e1850:
    // 0x2e1850: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2E1850u;
    {
        const bool branch_taken_0x2e1850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1850) {
            ctx->pc = 0x2E19A4u;
            goto label_2e19a4;
        }
    }
    ctx->pc = 0x2E1858u;
    // 0x2e1858: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e185c: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e1860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1864: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E1864u;
    SET_GPR_U32(ctx, 31, 0x2E186Cu);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E1864u, 0x2E186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E186Cu;
label_2e186c:
    // 0x2e186c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1870: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2e1870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e1874: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x2E1874u;
    SET_GPR_U32(ctx, 31, 0x2E187Cu);
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x2E1874u, 0x2E187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E187Cu;
label_2e187c:
    // 0x2e187c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1880: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E1880u;
    {
        const bool branch_taken_0x2e1880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1880) {
            ctx->pc = 0x2E1928u;
            goto label_2e1928;
        }
    }
    ctx->pc = 0x2E1888u;
    // 0x2e1888: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e1888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e188c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E188Cu;
    {
        const bool branch_taken_0x2e188c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e188c) {
            ctx->pc = 0x2E189Cu;
            goto label_2e189c;
        }
    }
    ctx->pc = 0x2E1894u;
    // 0x2e1894: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2E1894u;
    {
        const bool branch_taken_0x2e1894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1894) {
            ctx->pc = 0x2E19A4u;
            goto label_2e19a4;
        }
    }
    ctx->pc = 0x2E189Cu;
label_2e189c:
    // 0x2e189c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e18a0: 0xc0b868c  jal         func_2E1A30
    ctx->pc = 0x2E18A0u;
    SET_GPR_U32(ctx, 31, 0x2E18A8u);
    ctx->pc = 0x2E1A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A30u, 0x2E18A0u, 0x2E18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18A8u;
label_2e18a8:
    // 0x2e18a8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E18A8u;
    {
        const bool branch_taken_0x2e18a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e18a8) {
            ctx->pc = 0x2E18F8u;
            goto label_2e18f8;
        }
    }
    ctx->pc = 0x2E18B0u;
    // 0x2e18b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e18b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e18b4: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e18b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e18b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e18b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e18bc: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E18BCu;
    SET_GPR_U32(ctx, 31, 0x2E18C4u);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E18BCu, 0x2E18C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18C4u;
label_2e18c4:
    // 0x2e18c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e18c8: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2e18c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e18cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e18ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e18d0: 0xc096fe0  jal         func_25BF80
    ctx->pc = 0x2E18D0u;
    SET_GPR_U32(ctx, 31, 0x2E18D8u);
    ctx->pc = 0x25BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF80u, 0x2E18D0u, 0x2E18D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18D8u;
label_2e18d8:
    // 0x2e18d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e18d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e18dc: 0xc0b888c  jal         func_2E2230
    ctx->pc = 0x2E18DCu;
    SET_GPR_U32(ctx, 31, 0x2E18E4u);
    ctx->pc = 0x2E2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2230u, 0x2E18DCu, 0x2E18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18E4u;
label_2e18e4:
    // 0x2e18e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e18e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e18e8: 0xc0b89b4  jal         func_2E26D0
    ctx->pc = 0x2E18E8u;
    SET_GPR_U32(ctx, 31, 0x2E18F0u);
    ctx->pc = 0x2E26D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E26D0u, 0x2E18E8u, 0x2E18F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18F0u;
label_2e18f0:
    // 0x2e18f0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2E18F0u;
    {
        const bool branch_taken_0x2e18f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e18f0) {
            ctx->pc = 0x2E19A4u;
            goto label_2e19a4;
        }
    }
    ctx->pc = 0x2E18F8u;
label_2e18f8:
    // 0x2e18f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e18fc: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e1900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1904: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E1904u;
    SET_GPR_U32(ctx, 31, 0x2E190Cu);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E1904u, 0x2E190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E190Cu;
label_2e190c:
    // 0x2e190c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1910: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2e1910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e1914: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e1914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1918: 0xc096fe0  jal         func_25BF80
    ctx->pc = 0x2E1918u;
    SET_GPR_U32(ctx, 31, 0x2E1920u);
    ctx->pc = 0x25BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF80u, 0x2E1918u, 0x2E1920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1920u;
label_2e1920:
    // 0x2e1920: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E1920u;
    {
        const bool branch_taken_0x2e1920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1920) {
            ctx->pc = 0x2E19A4u;
            goto label_2e19a4;
        }
    }
    ctx->pc = 0x2E1928u;
label_2e1928:
    // 0x2e1928: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e1928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e192c: 0xc0b8724  jal         func_2E1C90
    ctx->pc = 0x2E192Cu;
    SET_GPR_U32(ctx, 31, 0x2E1934u);
    ctx->pc = 0x2E1C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1C90u, 0x2E192Cu, 0x2E1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1934u;
label_2e1934:
    // 0x2e1934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e1934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1938: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e193c: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e193cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e1940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1944: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E1944u;
    SET_GPR_U32(ctx, 31, 0x2E194Cu);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E1944u, 0x2E194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E194Cu;
label_2e194c:
    // 0x2e194c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1950: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2e1950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e1954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e1954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1958: 0xc096fe0  jal         func_25BF80
    ctx->pc = 0x2E1958u;
    SET_GPR_U32(ctx, 31, 0x2E1960u);
    ctx->pc = 0x25BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF80u, 0x2E1958u, 0x2E1960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1960u;
label_2e1960:
    // 0x2e1960: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e1960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1964: 0x1203000f  beq         $s0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E1964u;
    {
        const bool branch_taken_0x2e1964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1964) {
            ctx->pc = 0x2E19A4u;
            goto label_2e19a4;
        }
    }
    ctx->pc = 0x2E196Cu;
    // 0x2e196c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e196cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1970: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1970u;
    {
        const bool branch_taken_0x2e1970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1970) {
            ctx->pc = 0x2E1998u;
            goto label_2e1998;
        }
    }
    ctx->pc = 0x2E1978u;
    // 0x2e1978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e197c: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E197Cu;
    {
        const bool branch_taken_0x2e197c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e197c) {
            ctx->pc = 0x2E198Cu;
            goto label_2e198c;
        }
    }
    ctx->pc = 0x2E1984u;
    // 0x2e1984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1984u;
    {
        const bool branch_taken_0x2e1984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1984) {
            ctx->pc = 0x2E19A4u;
            goto label_2e19a4;
        }
    }
    ctx->pc = 0x2E198Cu;
label_2e198c:
    // 0x2e198c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e198cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1990: 0xc0b888c  jal         func_2E2230
    ctx->pc = 0x2E1990u;
    SET_GPR_U32(ctx, 31, 0x2E1998u);
    ctx->pc = 0x2E2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2230u, 0x2E1990u, 0x2E1998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1998u;
label_2e1998:
    // 0x2e1998: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e1998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e199c: 0xc0b89b4  jal         func_2E26D0
    ctx->pc = 0x2E199Cu;
    SET_GPR_U32(ctx, 31, 0x2E19A4u);
    ctx->pc = 0x2E26D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E26D0u, 0x2E199Cu, 0x2E19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E19A4u;
label_2e19a4:
    // 0x2e19a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e19a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e19a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e19a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e19ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e19acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e19b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E19B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E19B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E19B8u;
    // 0x2e19b8: 0x0  nop
    ctx->pc = 0x2e19b8u;
    // NOP
    // 0x2e19bc: 0x0  nop
    ctx->pc = 0x2e19bcu;
    // NOP
    ctx->pc = 0x2e19c0u;
}
