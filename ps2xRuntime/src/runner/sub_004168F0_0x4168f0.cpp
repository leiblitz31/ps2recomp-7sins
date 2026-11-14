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

// Function: sub_004168F0
// Address: 0x4168f0 - 0x4169c8
void sub_004168F0_0x4168f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004168F0_0x4168f0");
#endif

    switch (ctx->pc) {
        case 0x4168f0u: goto label_4168f0;
        case 0x4168f4u: goto label_4168f4;
        case 0x4168f8u: goto label_4168f8;
        case 0x4168fcu: goto label_4168fc;
        case 0x416900u: goto label_416900;
        case 0x416904u: goto label_416904;
        case 0x416908u: goto label_416908;
        case 0x41690cu: goto label_41690c;
        case 0x416910u: goto label_416910;
        case 0x416914u: goto label_416914;
        case 0x416918u: goto label_416918;
        case 0x41691cu: goto label_41691c;
        case 0x416920u: goto label_416920;
        case 0x416924u: goto label_416924;
        case 0x416928u: goto label_416928;
        case 0x41692cu: goto label_41692c;
        case 0x416930u: goto label_416930;
        case 0x416934u: goto label_416934;
        case 0x416938u: goto label_416938;
        case 0x41693cu: goto label_41693c;
        case 0x416940u: goto label_416940;
        case 0x416944u: goto label_416944;
        case 0x416948u: goto label_416948;
        case 0x41694cu: goto label_41694c;
        case 0x416950u: goto label_416950;
        case 0x416954u: goto label_416954;
        case 0x416958u: goto label_416958;
        case 0x41695cu: goto label_41695c;
        case 0x416960u: goto label_416960;
        case 0x416964u: goto label_416964;
        case 0x416968u: goto label_416968;
        case 0x41696cu: goto label_41696c;
        case 0x416970u: goto label_416970;
        case 0x416974u: goto label_416974;
        case 0x416978u: goto label_416978;
        case 0x41697cu: goto label_41697c;
        case 0x416980u: goto label_416980;
        case 0x416984u: goto label_416984;
        case 0x416988u: goto label_416988;
        case 0x41698cu: goto label_41698c;
        case 0x416990u: goto label_416990;
        case 0x416994u: goto label_416994;
        case 0x416998u: goto label_416998;
        case 0x41699cu: goto label_41699c;
        case 0x4169a0u: goto label_4169a0;
        case 0x4169a4u: goto label_4169a4;
        case 0x4169a8u: goto label_4169a8;
        case 0x4169acu: goto label_4169ac;
        case 0x4169b0u: goto label_4169b0;
        case 0x4169b4u: goto label_4169b4;
        case 0x4169b8u: goto label_4169b8;
        case 0x4169bcu: goto label_4169bc;
        case 0x4169c0u: goto label_4169c0;
        case 0x4169c4u: goto label_4169c4;
        default: break;
    }

    ctx->pc = 0x4168f0u;

label_4168f0:
    // 0x4168f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4168f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4168f4:
    // 0x4168f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4168f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4168f8:
    // 0x4168f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4168f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4168fc:
    // 0x4168fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4168fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416900:
    // 0x416900: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x416900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_416904:
    // 0x416904: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x416904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_416908:
    // 0x416908: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x416908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_41690c:
    // 0x41690c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41690cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_416910:
    // 0x416910: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x416910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_416914:
    // 0x416914: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x416914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_416918:
    // 0x416918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x416918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41691c:
    // 0x41691c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_416920:
    // 0x416920: 0x8e6200ac  lw          $v0, 0xAC($s3)
    ctx->pc = 0x416920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_416924:
    // 0x416924: 0x40f809  jalr        $v0
label_416928:
    if (ctx->pc == 0x416928u) {
        ctx->pc = 0x416928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416924u;
        // 0x416928: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41692Cu;
        goto label_41692c;
    }
    ctx->pc = 0x416924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41692Cu);
        ctx->pc = 0x416928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416924u;
        // 0x416928: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416924u, 0x41692Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41692Cu;
label_41692c:
    // 0x41692c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_416930:
    if (ctx->pc == 0x416930u) {
        ctx->pc = 0x416930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41692Cu;
        // 0x416930: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416934u;
        goto label_416934;
    }
    ctx->pc = 0x41692Cu;
    {
        const bool branch_taken_0x41692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41692Cu;
        // 0x416930: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41692c) {
            ctx->pc = 0x4169A4u;
            goto label_4169a4;
        }
    }
    ctx->pc = 0x416934u;
label_416934:
    // 0x416934: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x416934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_416938:
    // 0x416938: 0x2452ca10  addiu       $s2, $v0, -0x35F0
    ctx->pc = 0x416938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
label_41693c:
    // 0x41693c: 0xc104aec  jal         func_412BB0
label_416940:
    if (ctx->pc == 0x416940u) {
        ctx->pc = 0x416940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41693Cu;
        // 0x416940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416944u;
        goto label_416944;
    }
    ctx->pc = 0x41693Cu;
    SET_GPR_U32(ctx, 31, 0x416944u);
    ctx->pc = 0x416940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41693Cu;
    // 0x416940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x41693Cu, 0x416944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416944u;
label_416944:
    // 0x416944: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x416944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_416948:
    // 0x416948: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x416948u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_41694c:
    // 0x41694c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416950:
    // 0x416950: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x416950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_416954:
    // 0x416954: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x416954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_416958:
    // 0x416958: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x416958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_41695c:
    // 0x41695c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_416960:
    // 0x416960: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x416960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_416964:
    // 0x416964: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x416964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_416968:
    // 0x416968: 0xc103404  jal         func_40D010
label_41696c:
    if (ctx->pc == 0x41696Cu) {
        ctx->pc = 0x41696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416968u;
        // 0x41696c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416970u;
        goto label_416970;
    }
    ctx->pc = 0x416968u;
    SET_GPR_U32(ctx, 31, 0x416970u);
    ctx->pc = 0x41696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416968u;
    // 0x41696c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x416968u, 0x416970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416970u;
label_416970:
    // 0x416970: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_416974:
    if (ctx->pc == 0x416974u) {
        ctx->pc = 0x416974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416970u;
        // 0x416974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416978u;
        goto label_416978;
    }
    ctx->pc = 0x416970u;
    {
        const bool branch_taken_0x416970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416970u;
        // 0x416974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416970) {
            ctx->pc = 0x4169A4u;
            goto label_4169a4;
        }
    }
    ctx->pc = 0x416978u;
label_416978:
    // 0x416978: 0x8e6200b4  lw          $v0, 0xB4($s3)
    ctx->pc = 0x416978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_41697c:
    // 0x41697c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x41697cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416980:
    // 0x416980: 0x40f809  jalr        $v0
label_416984:
    if (ctx->pc == 0x416984u) {
        ctx->pc = 0x416984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416980u;
        // 0x416984: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416988u;
        goto label_416988;
    }
    ctx->pc = 0x416980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x416988u);
        ctx->pc = 0x416984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416980u;
        // 0x416984: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416980u, 0x416988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x416988u;
label_416988:
    // 0x416988: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41698c:
    if (ctx->pc == 0x41698Cu) {
        ctx->pc = 0x41698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416988u;
        // 0x41698c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416990u;
        goto label_416990;
    }
    ctx->pc = 0x416988u;
    {
        const bool branch_taken_0x416988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416988u;
        // 0x41698c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416988) {
            ctx->pc = 0x4169A4u;
            goto label_4169a4;
        }
    }
    ctx->pc = 0x416990u;
label_416990:
    // 0x416990: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x416990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416994:
    // 0x416994: 0xc104a72  jal         func_4129C8
label_416998:
    if (ctx->pc == 0x416998u) {
        ctx->pc = 0x416998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416994u;
        // 0x416998: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41699Cu;
        goto label_41699c;
    }
    ctx->pc = 0x416994u;
    SET_GPR_U32(ctx, 31, 0x41699Cu);
    ctx->pc = 0x416998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416994u;
    // 0x416998: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x416994u, 0x41699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41699Cu;
label_41699c:
    // 0x41699c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4169a0:
    if (ctx->pc == 0x4169A0u) {
        ctx->pc = 0x4169A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41699Cu;
        // 0x4169a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4169A4u;
        goto label_4169a4;
    }
    ctx->pc = 0x41699Cu;
    {
        const bool branch_taken_0x41699c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4169A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41699Cu;
        // 0x4169a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41699c) {
            ctx->pc = 0x4169ACu;
            goto label_4169ac;
        }
    }
    ctx->pc = 0x4169A4u;
label_4169a4:
    // 0x4169a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4169a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4169a8:
    // 0x4169a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4169a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4169ac:
    // 0x4169ac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4169acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4169b0:
    // 0x4169b0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4169b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4169b4:
    // 0x4169b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4169b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4169b8:
    // 0x4169b8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4169b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4169bc:
    // 0x4169bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4169bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4169c0:
    // 0x4169c0: 0x3e00008  jr          $ra
label_4169c4:
    if (ctx->pc == 0x4169C4u) {
        ctx->pc = 0x4169C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4169C0u;
        // 0x4169c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4169C8u;
        goto label_fallthrough_0x4169c0;
    }
    ctx->pc = 0x4169C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4169C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4169C0u;
        // 0x4169c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4169C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4169c0:
    ctx->pc = 0x4169C8u;
}
