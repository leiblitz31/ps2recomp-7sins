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

// Function: sub_001FD510
// Address: 0x1fd510 - 0x1fdfb0
void sub_001FD510_0x1fd510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD510_0x1fd510");
#endif

    switch (ctx->pc) {
        case 0x1fd538u: goto label_1fd538;
        case 0x1fd558u: goto label_1fd558;
        case 0x1fd568u: goto label_1fd568;
        case 0x1fd57cu: goto label_1fd57c;
        case 0x1fd5b8u: goto label_1fd5b8;
        case 0x1fd5ccu: goto label_1fd5cc;
        case 0x1fd5dcu: goto label_1fd5dc;
        case 0x1fd60cu: goto label_1fd60c;
        case 0x1fd620u: goto label_1fd620;
        case 0x1fd634u: goto label_1fd634;
        case 0x1fd640u: goto label_1fd640;
        case 0x1fd670u: goto label_1fd670;
        case 0x1fd684u: goto label_1fd684;
        case 0x1fd694u: goto label_1fd694;
        case 0x1fd6a0u: goto label_1fd6a0;
        case 0x1fd6d0u: goto label_1fd6d0;
        case 0x1fd6e4u: goto label_1fd6e4;
        case 0x1fd6f4u: goto label_1fd6f4;
        case 0x1fd700u: goto label_1fd700;
        case 0x1fd738u: goto label_1fd738;
        case 0x1fd74cu: goto label_1fd74c;
        case 0x1fd75cu: goto label_1fd75c;
        case 0x1fd78cu: goto label_1fd78c;
        case 0x1fd7a0u: goto label_1fd7a0;
        case 0x1fd7b0u: goto label_1fd7b0;
        case 0x1fd7e0u: goto label_1fd7e0;
        case 0x1fd7f4u: goto label_1fd7f4;
        case 0x1fd804u: goto label_1fd804;
        case 0x1fd834u: goto label_1fd834;
        case 0x1fd848u: goto label_1fd848;
        case 0x1fd858u: goto label_1fd858;
        case 0x1fd888u: goto label_1fd888;
        case 0x1fd89cu: goto label_1fd89c;
        case 0x1fd8acu: goto label_1fd8ac;
        case 0x1fd8b8u: goto label_1fd8b8;
        case 0x1fd8e8u: goto label_1fd8e8;
        case 0x1fd8fcu: goto label_1fd8fc;
        case 0x1fd90cu: goto label_1fd90c;
        case 0x1fd918u: goto label_1fd918;
        case 0x1fd948u: goto label_1fd948;
        case 0x1fd95cu: goto label_1fd95c;
        case 0x1fd96cu: goto label_1fd96c;
        case 0x1fd978u: goto label_1fd978;
        case 0x1fd9a8u: goto label_1fd9a8;
        case 0x1fd9bcu: goto label_1fd9bc;
        case 0x1fd9ccu: goto label_1fd9cc;
        case 0x1fd9d8u: goto label_1fd9d8;
        case 0x1fda08u: goto label_1fda08;
        case 0x1fda1cu: goto label_1fda1c;
        case 0x1fda2cu: goto label_1fda2c;
        case 0x1fda5cu: goto label_1fda5c;
        case 0x1fda70u: goto label_1fda70;
        case 0x1fda84u: goto label_1fda84;
        case 0x1fdaa8u: goto label_1fdaa8;
        case 0x1fdabcu: goto label_1fdabc;
        case 0x1fdaccu: goto label_1fdacc;
        case 0x1fdaf4u: goto label_1fdaf4;
        case 0x1fdb08u: goto label_1fdb08;
        case 0x1fdb18u: goto label_1fdb18;
        case 0x1fdb24u: goto label_1fdb24;
        case 0x1fdbb8u: goto label_1fdbb8;
        case 0x1fdbccu: goto label_1fdbcc;
        case 0x1fdbdcu: goto label_1fdbdc;
        case 0x1fdbe8u: goto label_1fdbe8;
        case 0x1fdc7cu: goto label_1fdc7c;
        case 0x1fdc90u: goto label_1fdc90;
        case 0x1fdca0u: goto label_1fdca0;
        case 0x1fdcacu: goto label_1fdcac;
        case 0x1fdd40u: goto label_1fdd40;
        case 0x1fdd54u: goto label_1fdd54;
        case 0x1fdd64u: goto label_1fdd64;
        case 0x1fdd70u: goto label_1fdd70;
        case 0x1fde04u: goto label_1fde04;
        case 0x1fde1cu: goto label_1fde1c;
        case 0x1fde34u: goto label_1fde34;
        case 0x1fde64u: goto label_1fde64;
        case 0x1fde78u: goto label_1fde78;
        case 0x1fde88u: goto label_1fde88;
        case 0x1fdebcu: goto label_1fdebc;
        case 0x1fded4u: goto label_1fded4;
        case 0x1fdee4u: goto label_1fdee4;
        case 0x1fdef0u: goto label_1fdef0;
        default: break;
    }

    ctx->pc = 0x1fd510u;

    // 0x1fd510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fd510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fd514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fd514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fd518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fd51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fd51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd520: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1fd520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1fd524: 0x24620054  addiu       $v0, $v1, 0x54
    ctx->pc = 0x1fd524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x1fd528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fd528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd52c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fd52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd530: 0x1000028c  b           . + 4 + (0x28C << 2)
    ctx->pc = 0x1FD530u;
    {
        const bool branch_taken_0x1fd530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd530) {
            ctx->pc = 0x1FDF64u;
            goto label_1fdf64;
        }
    }
    ctx->pc = 0x1FD538u;
label_1fd538:
    // 0x1fd538: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fd538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd53c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x1fd53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x1fd540: 0x24848b10  addiu       $a0, $a0, -0x74F0
    ctx->pc = 0x1fd540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937360));
    // 0x1fd544: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1fd544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fd548: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1fd548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1fd54c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1fd54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd550: 0xc040304  jal         func_100C10
    ctx->pc = 0x1FD550u;
    SET_GPR_U32(ctx, 31, 0x1FD558u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1FD550u, 0x1FD558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD558u;
label_1fd558:
    // 0x1fd558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd55c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1fd55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1fd560: 0xc05c618  jal         func_171860
    ctx->pc = 0x1FD560u;
    SET_GPR_U32(ctx, 31, 0x1FD568u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1FD560u, 0x1FD568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD568u;
label_1fd568:
    // 0x1fd568: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1fd568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x1fd56c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1fd56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1fd570: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fd570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd574: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1FD574u;
    SET_GPR_U32(ctx, 31, 0x1FD57Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1FD574u, 0x1FD57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD57Cu;
label_1fd57c:
    // 0x1fd57c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1fd57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd580: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fd580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd584: 0x10850275  beq         $a0, $a1, . + 4 + (0x275 << 2)
    ctx->pc = 0x1FD584u;
    {
        const bool branch_taken_0x1fd584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fd584) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD58Cu;
    // 0x1fd58c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1fd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd590: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1fd590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1fd594: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1fd594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x1fd598: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd59c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x1fd59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x1fd5a0: 0x24848b10  addiu       $a0, $a0, -0x74F0
    ctx->pc = 0x1fd5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937360));
    // 0x1fd5a4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1fd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fd5a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd5ac: 0x27859968  addiu       $a1, $gp, -0x6698
    ctx->pc = 0x1fd5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941032));
    // 0x1fd5b0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD5B0u;
    SET_GPR_U32(ctx, 31, 0x1FD5B8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD5B0u, 0x1FD5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD5B8u;
label_1fd5b8:
    // 0x1fd5b8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD5B8u;
    {
        const bool branch_taken_0x1fd5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5b8) {
            ctx->pc = 0x1FD5ECu;
            goto label_1fd5ec;
        }
    }
    ctx->pc = 0x1FD5C0u;
    // 0x1fd5c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd5c4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD5C4u;
    SET_GPR_U32(ctx, 31, 0x1FD5CCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD5C4u, 0x1FD5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD5CCu;
label_1fd5cc:
    // 0x1fd5cc: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1fd5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd5d0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1fd5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fd5d4: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1FD5D4u;
    SET_GPR_U32(ctx, 31, 0x1FD5DCu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1FD5D4u, 0x1FD5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD5DCu;
label_1fd5dc:
    // 0x1fd5dc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fd5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fd5e0: 0xac62bf54  sw          $v0, -0x40AC($v1)
    ctx->pc = 0x1fd5e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BF54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF54u, _value); } while (0);
    // 0x1fd5e4: 0x1000025d  b           . + 4 + (0x25D << 2)
    ctx->pc = 0x1FD5E4u;
    {
        const bool branch_taken_0x1fd5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5e4) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD5ECu;
label_1fd5ec:
    // 0x1fd5ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd5f0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x1fd5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x1fd5f4: 0x24848b10  addiu       $a0, $a0, -0x74F0
    ctx->pc = 0x1fd5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937360));
    // 0x1fd5f8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1fd5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fd5fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd600: 0x27859928  addiu       $a1, $gp, -0x66D8
    ctx->pc = 0x1fd600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940968));
    // 0x1fd604: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD604u;
    SET_GPR_U32(ctx, 31, 0x1FD60Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD604u, 0x1FD60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD60Cu;
label_1fd60c:
    // 0x1fd60c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FD60Cu;
    {
        const bool branch_taken_0x1fd60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd60c) {
            ctx->pc = 0x1FD650u;
            goto label_1fd650;
        }
    }
    ctx->pc = 0x1FD614u;
    // 0x1fd614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd618: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD618u;
    SET_GPR_U32(ctx, 31, 0x1FD620u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD618u, 0x1FD620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD620u;
label_1fd620:
    // 0x1fd620: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fd620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd624: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1fd624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd628: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1fd628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd62c: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FD62Cu;
    SET_GPR_U32(ctx, 31, 0x1FD634u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FD62Cu, 0x1FD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD634u;
label_1fd634:
    // 0x1fd634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd638: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FD638u;
    SET_GPR_U32(ctx, 31, 0x1FD640u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FD638u, 0x1FD640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD640u;
label_1fd640:
    // 0x1fd640: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd644: 0xe440bf6c  swc1        $f0, -0x4094($v0)
    ctx->pc = 0x1fd644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF6Cu, _value); } while (0); }
    // 0x1fd648: 0x10000244  b           . + 4 + (0x244 << 2)
    ctx->pc = 0x1FD648u;
    {
        const bool branch_taken_0x1fd648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd648) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD650u;
label_1fd650:
    // 0x1fd650: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd654: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd658: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fd658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fd65c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1fd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd660: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fd660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd664: 0x27859920  addiu       $a1, $gp, -0x66E0
    ctx->pc = 0x1fd664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940960));
    // 0x1fd668: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD668u;
    SET_GPR_U32(ctx, 31, 0x1FD670u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD668u, 0x1FD670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD670u;
label_1fd670:
    // 0x1fd670: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FD670u;
    {
        const bool branch_taken_0x1fd670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd670) {
            ctx->pc = 0x1FD6B0u;
            goto label_1fd6b0;
        }
    }
    ctx->pc = 0x1FD678u;
    // 0x1fd678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd67c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD67Cu;
    SET_GPR_U32(ctx, 31, 0x1FD684u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD67Cu, 0x1FD684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD684u;
label_1fd684:
    // 0x1fd684: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fd684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd688: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd68c: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FD68Cu;
    SET_GPR_U32(ctx, 31, 0x1FD694u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FD68Cu, 0x1FD694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD694u;
label_1fd694:
    // 0x1fd694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd698: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FD698u;
    SET_GPR_U32(ctx, 31, 0x1FD6A0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FD698u, 0x1FD6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6A0u;
label_1fd6a0:
    // 0x1fd6a0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd6a4: 0xe440bf70  swc1        $f0, -0x4090($v0)
    ctx->pc = 0x1fd6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF70u, _value); } while (0); }
    // 0x1fd6a8: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x1FD6A8u;
    {
        const bool branch_taken_0x1fd6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd6a8) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD6B0u;
label_1fd6b0:
    // 0x1fd6b0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd6b4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd6b8: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fd6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fd6bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd6c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd6c4: 0x2785992c  addiu       $a1, $gp, -0x66D4
    ctx->pc = 0x1fd6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940972));
    // 0x1fd6c8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD6C8u;
    SET_GPR_U32(ctx, 31, 0x1FD6D0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD6C8u, 0x1FD6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6D0u;
label_1fd6d0:
    // 0x1fd6d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FD6D0u;
    {
        const bool branch_taken_0x1fd6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd6d0) {
            ctx->pc = 0x1FD718u;
            goto label_1fd718;
        }
    }
    ctx->pc = 0x1FD6D8u;
    // 0x1fd6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6dc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD6DCu;
    SET_GPR_U32(ctx, 31, 0x1FD6E4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD6DCu, 0x1FD6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6E4u;
label_1fd6e4:
    // 0x1fd6e4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fd6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd6e8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd6ec: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FD6ECu;
    SET_GPR_U32(ctx, 31, 0x1FD6F4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FD6ECu, 0x1FD6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6F4u;
label_1fd6f4:
    // 0x1fd6f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6f8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FD6F8u;
    SET_GPR_U32(ctx, 31, 0x1FD700u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FD6F8u, 0x1FD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD700u;
label_1fd700:
    // 0x1fd700: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1fd700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1fd704: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1fd704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd708: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd70c: 0xe4408b90  swc1        $f0, -0x7470($v0)
    ctx->pc = 0x1fd70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4E8B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E8B90u, _value); } while (0); }
    // 0x1fd710: 0x10000212  b           . + 4 + (0x212 << 2)
    ctx->pc = 0x1FD710u;
    {
        const bool branch_taken_0x1fd710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd710) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD718u;
label_1fd718:
    // 0x1fd718: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd71c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd720: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fd720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fd724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd728: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd72c: 0x2785991c  addiu       $a1, $gp, -0x66E4
    ctx->pc = 0x1fd72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940956));
    // 0x1fd730: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD730u;
    SET_GPR_U32(ctx, 31, 0x1FD738u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD730u, 0x1FD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD738u;
label_1fd738:
    // 0x1fd738: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD738u;
    {
        const bool branch_taken_0x1fd738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd738) {
            ctx->pc = 0x1FD76Cu;
            goto label_1fd76c;
        }
    }
    ctx->pc = 0x1FD740u;
    // 0x1fd740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd744: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD744u;
    SET_GPR_U32(ctx, 31, 0x1FD74Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD744u, 0x1FD74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD74Cu;
label_1fd74c:
    // 0x1fd74c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fd74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd750: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd754: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1FD754u;
    SET_GPR_U32(ctx, 31, 0x1FD75Cu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1FD754u, 0x1FD75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD75Cu;
label_1fd75c:
    // 0x1fd75c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fd75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fd760: 0xac62bf58  sw          $v0, -0x40A8($v1)
    ctx->pc = 0x1fd760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BF58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF58u, _value); } while (0);
    // 0x1fd764: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x1FD764u;
    {
        const bool branch_taken_0x1fd764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd764) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD76Cu;
label_1fd76c:
    // 0x1fd76c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd770: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd774: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fd774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fd778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd77c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd780: 0x27859918  addiu       $a1, $gp, -0x66E8
    ctx->pc = 0x1fd780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940952));
    // 0x1fd784: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD784u;
    SET_GPR_U32(ctx, 31, 0x1FD78Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD784u, 0x1FD78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD78Cu;
label_1fd78c:
    // 0x1fd78c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD78Cu;
    {
        const bool branch_taken_0x1fd78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd78c) {
            ctx->pc = 0x1FD7C0u;
            goto label_1fd7c0;
        }
    }
    ctx->pc = 0x1FD794u;
    // 0x1fd794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd798: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD798u;
    SET_GPR_U32(ctx, 31, 0x1FD7A0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD798u, 0x1FD7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD7A0u;
label_1fd7a0:
    // 0x1fd7a0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fd7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd7a4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd7a8: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1FD7A8u;
    SET_GPR_U32(ctx, 31, 0x1FD7B0u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1FD7A8u, 0x1FD7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD7B0u;
label_1fd7b0:
    // 0x1fd7b0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fd7b4: 0xac62bf5c  sw          $v0, -0x40A4($v1)
    ctx->pc = 0x1fd7b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BF5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF5Cu, _value); } while (0);
    // 0x1fd7b8: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x1FD7B8u;
    {
        const bool branch_taken_0x1fd7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd7b8) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD7C0u;
label_1fd7c0:
    // 0x1fd7c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd7c4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd7c8: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fd7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fd7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd7d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd7d4: 0x2785996c  addiu       $a1, $gp, -0x6694
    ctx->pc = 0x1fd7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941036));
    // 0x1fd7d8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD7D8u;
    SET_GPR_U32(ctx, 31, 0x1FD7E0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD7D8u, 0x1FD7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD7E0u;
label_1fd7e0:
    // 0x1fd7e0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD7E0u;
    {
        const bool branch_taken_0x1fd7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd7e0) {
            ctx->pc = 0x1FD814u;
            goto label_1fd814;
        }
    }
    ctx->pc = 0x1FD7E8u;
    // 0x1fd7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7ec: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD7ECu;
    SET_GPR_U32(ctx, 31, 0x1FD7F4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD7ECu, 0x1FD7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD7F4u;
label_1fd7f4:
    // 0x1fd7f4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fd7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd7f8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd7fc: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1FD7FCu;
    SET_GPR_U32(ctx, 31, 0x1FD804u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1FD7FCu, 0x1FD804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD804u;
label_1fd804:
    // 0x1fd804: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fd804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fd808: 0xac62bf50  sw          $v0, -0x40B0($v1)
    ctx->pc = 0x1fd808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BF50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF50u, _value); } while (0);
    // 0x1fd80c: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x1FD80Cu;
    {
        const bool branch_taken_0x1fd80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd80c) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD814u;
label_1fd814:
    // 0x1fd814: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd818: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd81c: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fd81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fd820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd824: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd828: 0x27859970  addiu       $a1, $gp, -0x6690
    ctx->pc = 0x1fd828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941040));
    // 0x1fd82c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD82Cu;
    SET_GPR_U32(ctx, 31, 0x1FD834u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD82Cu, 0x1FD834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD834u;
label_1fd834:
    // 0x1fd834: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD834u;
    {
        const bool branch_taken_0x1fd834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd834) {
            ctx->pc = 0x1FD868u;
            goto label_1fd868;
        }
    }
    ctx->pc = 0x1FD83Cu;
    // 0x1fd83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd840: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD840u;
    SET_GPR_U32(ctx, 31, 0x1FD848u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD840u, 0x1FD848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD848u;
label_1fd848:
    // 0x1fd848: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fd848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd84c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd850: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1FD850u;
    SET_GPR_U32(ctx, 31, 0x1FD858u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1FD850u, 0x1FD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD858u;
label_1fd858:
    // 0x1fd858: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fd858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fd85c: 0xac62bf60  sw          $v0, -0x40A0($v1)
    ctx->pc = 0x1fd85cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF60u, _value); } while (0);
    // 0x1fd860: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x1FD860u;
    {
        const bool branch_taken_0x1fd860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd860) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD868u;
label_1fd868:
    // 0x1fd868: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd86c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd870: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fd870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fd874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd878: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd87c: 0x27859930  addiu       $a1, $gp, -0x66D0
    ctx->pc = 0x1fd87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940976));
    // 0x1fd880: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD880u;
    SET_GPR_U32(ctx, 31, 0x1FD888u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD880u, 0x1FD888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD888u;
label_1fd888:
    // 0x1fd888: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FD888u;
    {
        const bool branch_taken_0x1fd888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd888) {
            ctx->pc = 0x1FD8C8u;
            goto label_1fd8c8;
        }
    }
    ctx->pc = 0x1FD890u;
    // 0x1fd890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd894: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD894u;
    SET_GPR_U32(ctx, 31, 0x1FD89Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD894u, 0x1FD89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD89Cu;
label_1fd89c:
    // 0x1fd89c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd8a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd8a4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FD8A4u;
    SET_GPR_U32(ctx, 31, 0x1FD8ACu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FD8A4u, 0x1FD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8ACu;
label_1fd8ac:
    // 0x1fd8ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8b0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FD8B0u;
    SET_GPR_U32(ctx, 31, 0x1FD8B8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FD8B0u, 0x1FD8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8B8u;
label_1fd8b8:
    // 0x1fd8b8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd8bc: 0xe440bf74  swc1        $f0, -0x408C($v0)
    ctx->pc = 0x1fd8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF74u, _value); } while (0); }
    // 0x1fd8c0: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x1FD8C0u;
    {
        const bool branch_taken_0x1fd8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd8c0) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD8C8u;
label_1fd8c8:
    // 0x1fd8c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd8cc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd8d0: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fd8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fd8d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd8d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd8dc: 0x27859934  addiu       $a1, $gp, -0x66CC
    ctx->pc = 0x1fd8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940980));
    // 0x1fd8e0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD8E0u;
    SET_GPR_U32(ctx, 31, 0x1FD8E8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD8E0u, 0x1FD8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8E8u;
label_1fd8e8:
    // 0x1fd8e8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FD8E8u;
    {
        const bool branch_taken_0x1fd8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd8e8) {
            ctx->pc = 0x1FD928u;
            goto label_1fd928;
        }
    }
    ctx->pc = 0x1FD8F0u;
    // 0x1fd8f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8f4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD8F4u;
    SET_GPR_U32(ctx, 31, 0x1FD8FCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD8F4u, 0x1FD8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8FCu;
label_1fd8fc:
    // 0x1fd8fc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fd8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd900: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd904: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FD904u;
    SET_GPR_U32(ctx, 31, 0x1FD90Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FD904u, 0x1FD90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD90Cu;
label_1fd90c:
    // 0x1fd90c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd910: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FD910u;
    SET_GPR_U32(ctx, 31, 0x1FD918u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FD910u, 0x1FD918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD918u;
label_1fd918:
    // 0x1fd918: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd91c: 0xe440bf78  swc1        $f0, -0x4088($v0)
    ctx->pc = 0x1fd91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF78u, _value); } while (0); }
    // 0x1fd920: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x1FD920u;
    {
        const bool branch_taken_0x1fd920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd920) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD928u;
label_1fd928:
    // 0x1fd928: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd92c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd930: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fd930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fd934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd938: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd93c: 0x27859938  addiu       $a1, $gp, -0x66C8
    ctx->pc = 0x1fd93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940984));
    // 0x1fd940: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD940u;
    SET_GPR_U32(ctx, 31, 0x1FD948u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD940u, 0x1FD948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD948u;
label_1fd948:
    // 0x1fd948: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FD948u;
    {
        const bool branch_taken_0x1fd948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd948) {
            ctx->pc = 0x1FD988u;
            goto label_1fd988;
        }
    }
    ctx->pc = 0x1FD950u;
    // 0x1fd950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd954: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD954u;
    SET_GPR_U32(ctx, 31, 0x1FD95Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD954u, 0x1FD95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD95Cu;
label_1fd95c:
    // 0x1fd95c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd960: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd964: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FD964u;
    SET_GPR_U32(ctx, 31, 0x1FD96Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FD964u, 0x1FD96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD96Cu;
label_1fd96c:
    // 0x1fd96c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd970: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FD970u;
    SET_GPR_U32(ctx, 31, 0x1FD978u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FD970u, 0x1FD978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD978u;
label_1fd978:
    // 0x1fd978: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd97c: 0xe440bf7c  swc1        $f0, -0x4084($v0)
    ctx->pc = 0x1fd97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF7Cu, _value); } while (0); }
    // 0x1fd980: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x1FD980u;
    {
        const bool branch_taken_0x1fd980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd980) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD988u;
label_1fd988:
    // 0x1fd988: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd98c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd990: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fd990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fd994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd998: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd99c: 0x2785993c  addiu       $a1, $gp, -0x66C4
    ctx->pc = 0x1fd99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940988));
    // 0x1fd9a0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FD9A0u;
    SET_GPR_U32(ctx, 31, 0x1FD9A8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FD9A0u, 0x1FD9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD9A8u;
label_1fd9a8:
    // 0x1fd9a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FD9A8u;
    {
        const bool branch_taken_0x1fd9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd9a8) {
            ctx->pc = 0x1FD9E8u;
            goto label_1fd9e8;
        }
    }
    ctx->pc = 0x1FD9B0u;
    // 0x1fd9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd9b4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FD9B4u;
    SET_GPR_U32(ctx, 31, 0x1FD9BCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FD9B4u, 0x1FD9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD9BCu;
label_1fd9bc:
    // 0x1fd9bc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fd9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fd9c0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd9c4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FD9C4u;
    SET_GPR_U32(ctx, 31, 0x1FD9CCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FD9C4u, 0x1FD9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD9CCu;
label_1fd9cc:
    // 0x1fd9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd9d0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FD9D0u;
    SET_GPR_U32(ctx, 31, 0x1FD9D8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FD9D0u, 0x1FD9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD9D8u;
label_1fd9d8:
    // 0x1fd9d8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd9dc: 0xe440bf80  swc1        $f0, -0x4080($v0)
    ctx->pc = 0x1fd9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF80u, _value); } while (0); }
    // 0x1fd9e0: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x1FD9E0u;
    {
        const bool branch_taken_0x1fd9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd9e0) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FD9E8u;
label_1fd9e8:
    // 0x1fd9e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fd9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fd9ec: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fd9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fd9f0: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fd9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fd9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd9f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fd9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd9fc: 0x27859940  addiu       $a1, $gp, -0x66C0
    ctx->pc = 0x1fd9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940992));
    // 0x1fda00: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FDA00u;
    SET_GPR_U32(ctx, 31, 0x1FDA08u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FDA00u, 0x1FDA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA08u;
label_1fda08:
    // 0x1fda08: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FDA08u;
    {
        const bool branch_taken_0x1fda08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fda08) {
            ctx->pc = 0x1FDA3Cu;
            goto label_1fda3c;
        }
    }
    ctx->pc = 0x1FDA10u;
    // 0x1fda10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fda10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fda14: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FDA14u;
    SET_GPR_U32(ctx, 31, 0x1FDA1Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FDA14u, 0x1FDA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA1Cu;
label_1fda1c:
    // 0x1fda1c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fda1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fda20: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fda20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fda24: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1FDA24u;
    SET_GPR_U32(ctx, 31, 0x1FDA2Cu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1FDA24u, 0x1FDA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA2Cu;
label_1fda2c:
    // 0x1fda2c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fda30: 0xac62bf64  sw          $v0, -0x409C($v1)
    ctx->pc = 0x1fda30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BF64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF64u, _value); } while (0);
    // 0x1fda34: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x1FDA34u;
    {
        const bool branch_taken_0x1fda34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fda34) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FDA3Cu;
label_1fda3c:
    // 0x1fda3c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fda40: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fda40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fda44: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fda44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fda48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fda48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fda4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fda4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fda50: 0x27859924  addiu       $a1, $gp, -0x66DC
    ctx->pc = 0x1fda50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940964));
    // 0x1fda54: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FDA54u;
    SET_GPR_U32(ctx, 31, 0x1FDA5Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FDA54u, 0x1FDA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA5Cu;
label_1fda5c:
    // 0x1fda5c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FDA5Cu;
    {
        const bool branch_taken_0x1fda5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fda5c) {
            ctx->pc = 0x1FDAD4u;
            goto label_1fdad4;
        }
    }
    ctx->pc = 0x1FDA64u;
    // 0x1fda64: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1fda64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1fda68: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1FDA68u;
    SET_GPR_U32(ctx, 31, 0x1FDA70u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1FDA68u, 0x1FDA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA70u;
label_1fda70:
    // 0x1fda70: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1fda70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1fda74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fda74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fda78: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x1fda78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1fda7c: 0xc061d44  jal         func_187510
    ctx->pc = 0x1FDA7Cu;
    SET_GPR_U32(ctx, 31, 0x1FDA84u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x1FDA7Cu, 0x1FDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA84u;
label_1fda84:
    // 0x1fda84: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fda84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fda88: 0xa040bf8c  sb          $zero, -0x4074($v0)
    ctx->pc = 0x1fda88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60BF8Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60BF8Cu, _value); } while (0);
    // 0x1fda8c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fda8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fda90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fda90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fda94: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDA94u;
    {
        const bool branch_taken_0x1fda94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fda94) {
            ctx->pc = 0x1FDABCu;
            goto label_1fdabc;
        }
    }
    ctx->pc = 0x1FDA9Cu;
    // 0x1fda9c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1fda9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1fdaa0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FDAA0u;
    SET_GPR_U32(ctx, 31, 0x1FDAA8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FDAA0u, 0x1FDAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDAA8u;
label_1fdaa8:
    // 0x1fdaa8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1fdaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x1fdaac: 0x2484bf8c  addiu       $a0, $a0, -0x4074
    ctx->pc = 0x1fdaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950796));
    // 0x1fdab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fdab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdab4: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1FDAB4u;
    SET_GPR_U32(ctx, 31, 0x1FDABCu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1FDAB4u, 0x1FDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDABCu;
label_1fdabc:
    // 0x1fdabc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1fdabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1fdac0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fdac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fdac4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1FDAC4u;
    SET_GPR_U32(ctx, 31, 0x1FDACCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1FDAC4u, 0x1FDACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDACCu;
label_1fdacc:
    // 0x1fdacc: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x1FDACCu;
    {
        const bool branch_taken_0x1fdacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdacc) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FDAD4u;
label_1fdad4:
    // 0x1fdad4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fdad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fdad8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fdad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fdadc: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fdadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fdae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdae4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fdae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fdae8: 0x27859960  addiu       $a1, $gp, -0x66A0
    ctx->pc = 0x1fdae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941024));
    // 0x1fdaec: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FDAECu;
    SET_GPR_U32(ctx, 31, 0x1FDAF4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FDAECu, 0x1FDAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDAF4u;
label_1fdaf4:
    // 0x1fdaf4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FDAF4u;
    {
        const bool branch_taken_0x1fdaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdaf4) {
            ctx->pc = 0x1FDB98u;
            goto label_1fdb98;
        }
    }
    ctx->pc = 0x1FDAFCu;
    // 0x1fdafc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdb00: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FDB00u;
    SET_GPR_U32(ctx, 31, 0x1FDB08u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FDB00u, 0x1FDB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB08u;
label_1fdb08:
    // 0x1fdb08: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fdb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fdb0c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fdb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdb10: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FDB10u;
    SET_GPR_U32(ctx, 31, 0x1FDB18u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FDB10u, 0x1FDB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB18u;
label_1fdb18:
    // 0x1fdb18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdb1c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FDB1Cu;
    SET_GPR_U32(ctx, 31, 0x1FDB24u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FDB1Cu, 0x1FDB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB24u;
label_1fdb24:
    // 0x1fdb24: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdb28: 0xe440bfb8  swc1        $f0, -0x4048($v0)
    ctx->pc = 0x1fdb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFB8u, _value); } while (0); }
    // 0x1fdb2c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1fdb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1fdb30: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1fdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fdb34: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDB34u;
    {
        const bool branch_taken_0x1fdb34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fdb34) {
            ctx->pc = 0x1FDB50u;
            goto label_1fdb50;
        }
    }
    ctx->pc = 0x1FDB3Cu;
    // 0x1fdb3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdb3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdb40: 0x0  nop
    ctx->pc = 0x1fdb40u;
    // NOP
    // 0x1fdb44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fdb44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fdb48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDB48u;
    {
        const bool branch_taken_0x1fdb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb48) {
            ctx->pc = 0x1FDB6Cu;
            goto label_1fdb6c;
        }
    }
    ctx->pc = 0x1FDB50u;
label_1fdb50:
    // 0x1fdb50: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fdb50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fdb54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fdb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fdb58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fdb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fdb5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fdb5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdb60: 0x0  nop
    ctx->pc = 0x1fdb60u;
    // NOP
    // 0x1fdb64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fdb64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fdb68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1fdb68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1fdb6c:
    // 0x1fdb6c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1fdb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1fdb70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdb70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdb74: 0x0  nop
    ctx->pc = 0x1fdb74u;
    // NOP
    // 0x1fdb78: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1fdb78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fdb7c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdb80: 0xc440bfb8  lwc1        $f0, -0x4048($v0)
    ctx->pc = 0x1fdb80u;
    { uint32_t bits = FAST_READ32(0x60BFB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdb84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fdb84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fdb88: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdb8c: 0xe440bfb8  swc1        $f0, -0x4048($v0)
    ctx->pc = 0x1fdb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFB8u, _value); } while (0); }
    // 0x1fdb90: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x1FDB90u;
    {
        const bool branch_taken_0x1fdb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb90) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FDB98u;
label_1fdb98:
    // 0x1fdb98: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fdb98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fdb9c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fdb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fdba0: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fdba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fdba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdba8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fdba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fdbac: 0x27859964  addiu       $a1, $gp, -0x669C
    ctx->pc = 0x1fdbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941028));
    // 0x1fdbb0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FDBB0u;
    SET_GPR_U32(ctx, 31, 0x1FDBB8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FDBB0u, 0x1FDBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBB8u;
label_1fdbb8:
    // 0x1fdbb8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FDBB8u;
    {
        const bool branch_taken_0x1fdbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdbb8) {
            ctx->pc = 0x1FDC5Cu;
            goto label_1fdc5c;
        }
    }
    ctx->pc = 0x1FDBC0u;
    // 0x1fdbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdbc4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FDBC4u;
    SET_GPR_U32(ctx, 31, 0x1FDBCCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FDBC4u, 0x1FDBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBCCu;
label_1fdbcc:
    // 0x1fdbcc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fdbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fdbd0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fdbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdbd4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FDBD4u;
    SET_GPR_U32(ctx, 31, 0x1FDBDCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FDBD4u, 0x1FDBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBDCu;
label_1fdbdc:
    // 0x1fdbdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdbe0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FDBE0u;
    SET_GPR_U32(ctx, 31, 0x1FDBE8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FDBE0u, 0x1FDBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBE8u;
label_1fdbe8:
    // 0x1fdbe8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdbec: 0xe440bfbc  swc1        $f0, -0x4044($v0)
    ctx->pc = 0x1fdbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFBCu, _value); } while (0); }
    // 0x1fdbf0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1fdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1fdbf4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1fdbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fdbf8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDBF8u;
    {
        const bool branch_taken_0x1fdbf8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fdbf8) {
            ctx->pc = 0x1FDC14u;
            goto label_1fdc14;
        }
    }
    ctx->pc = 0x1FDC00u;
    // 0x1fdc00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdc00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdc04: 0x0  nop
    ctx->pc = 0x1fdc04u;
    // NOP
    // 0x1fdc08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fdc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fdc0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDC0Cu;
    {
        const bool branch_taken_0x1fdc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc0c) {
            ctx->pc = 0x1FDC30u;
            goto label_1fdc30;
        }
    }
    ctx->pc = 0x1FDC14u;
label_1fdc14:
    // 0x1fdc14: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fdc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fdc18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fdc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fdc1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fdc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fdc20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fdc20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdc24: 0x0  nop
    ctx->pc = 0x1fdc24u;
    // NOP
    // 0x1fdc28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fdc28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fdc2c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1fdc2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1fdc30:
    // 0x1fdc30: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1fdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1fdc34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdc34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdc38: 0x0  nop
    ctx->pc = 0x1fdc38u;
    // NOP
    // 0x1fdc3c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1fdc3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fdc40: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdc44: 0xc440bfbc  lwc1        $f0, -0x4044($v0)
    ctx->pc = 0x1fdc44u;
    { uint32_t bits = FAST_READ32(0x60BFBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdc48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fdc48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fdc4c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdc50: 0xe440bfbc  swc1        $f0, -0x4044($v0)
    ctx->pc = 0x1fdc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFBCu, _value); } while (0); }
    // 0x1fdc54: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1FDC54u;
    {
        const bool branch_taken_0x1fdc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc54) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FDC5Cu;
label_1fdc5c:
    // 0x1fdc5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fdc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fdc60: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fdc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fdc64: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fdc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fdc68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdc6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fdc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fdc70: 0x2785994c  addiu       $a1, $gp, -0x66B4
    ctx->pc = 0x1fdc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941004));
    // 0x1fdc74: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FDC74u;
    SET_GPR_U32(ctx, 31, 0x1FDC7Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FDC74u, 0x1FDC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC7Cu;
label_1fdc7c:
    // 0x1fdc7c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FDC7Cu;
    {
        const bool branch_taken_0x1fdc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc7c) {
            ctx->pc = 0x1FDD20u;
            goto label_1fdd20;
        }
    }
    ctx->pc = 0x1FDC84u;
    // 0x1fdc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc88: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FDC88u;
    SET_GPR_U32(ctx, 31, 0x1FDC90u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FDC88u, 0x1FDC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC90u;
label_1fdc90:
    // 0x1fdc90: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fdc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fdc94: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fdc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdc98: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FDC98u;
    SET_GPR_U32(ctx, 31, 0x1FDCA0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FDC98u, 0x1FDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDCA0u;
label_1fdca0:
    // 0x1fdca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdca4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FDCA4u;
    SET_GPR_U32(ctx, 31, 0x1FDCACu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FDCA4u, 0x1FDCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDCACu;
label_1fdcac:
    // 0x1fdcac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdcb0: 0xe440bfc0  swc1        $f0, -0x4040($v0)
    ctx->pc = 0x1fdcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFC0u, _value); } while (0); }
    // 0x1fdcb4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1fdcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1fdcb8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1fdcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fdcbc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDCBCu;
    {
        const bool branch_taken_0x1fdcbc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fdcbc) {
            ctx->pc = 0x1FDCD8u;
            goto label_1fdcd8;
        }
    }
    ctx->pc = 0x1FDCC4u;
    // 0x1fdcc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdcc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdcc8: 0x0  nop
    ctx->pc = 0x1fdcc8u;
    // NOP
    // 0x1fdccc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fdcccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fdcd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDCD0u;
    {
        const bool branch_taken_0x1fdcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdcd0) {
            ctx->pc = 0x1FDCF4u;
            goto label_1fdcf4;
        }
    }
    ctx->pc = 0x1FDCD8u;
label_1fdcd8:
    // 0x1fdcd8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fdcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fdcdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fdcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fdce0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fdce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fdce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fdce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdce8: 0x0  nop
    ctx->pc = 0x1fdce8u;
    // NOP
    // 0x1fdcec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fdcecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fdcf0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1fdcf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1fdcf4:
    // 0x1fdcf4: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1fdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1fdcf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdcfc: 0x0  nop
    ctx->pc = 0x1fdcfcu;
    // NOP
    // 0x1fdd00: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1fdd00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fdd04: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdd08: 0xc440bfc0  lwc1        $f0, -0x4040($v0)
    ctx->pc = 0x1fdd08u;
    { uint32_t bits = FAST_READ32(0x60BFC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdd0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fdd0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fdd10: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdd14: 0xe440bfc0  swc1        $f0, -0x4040($v0)
    ctx->pc = 0x1fdd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFC0u, _value); } while (0); }
    // 0x1fdd18: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1FDD18u;
    {
        const bool branch_taken_0x1fdd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd18) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FDD20u;
label_1fdd20:
    // 0x1fdd20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fdd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fdd24: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fdd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fdd28: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fdd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fdd2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdd30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fdd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fdd34: 0x27859950  addiu       $a1, $gp, -0x66B0
    ctx->pc = 0x1fdd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941008));
    // 0x1fdd38: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FDD38u;
    SET_GPR_U32(ctx, 31, 0x1FDD40u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FDD38u, 0x1FDD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD40u;
label_1fdd40:
    // 0x1fdd40: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FDD40u;
    {
        const bool branch_taken_0x1fdd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd40) {
            ctx->pc = 0x1FDDE4u;
            goto label_1fdde4;
        }
    }
    ctx->pc = 0x1FDD48u;
    // 0x1fdd48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd4c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FDD4Cu;
    SET_GPR_U32(ctx, 31, 0x1FDD54u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FDD4Cu, 0x1FDD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD54u;
label_1fdd54:
    // 0x1fdd54: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fdd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fdd58: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fdd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdd5c: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FDD5Cu;
    SET_GPR_U32(ctx, 31, 0x1FDD64u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FDD5Cu, 0x1FDD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD64u;
label_1fdd64:
    // 0x1fdd64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd68: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FDD68u;
    SET_GPR_U32(ctx, 31, 0x1FDD70u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FDD68u, 0x1FDD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD70u;
label_1fdd70:
    // 0x1fdd70: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdd74: 0xe440bfc4  swc1        $f0, -0x403C($v0)
    ctx->pc = 0x1fdd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFC4u, _value); } while (0); }
    // 0x1fdd78: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1fdd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1fdd7c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1fdd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fdd80: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDD80u;
    {
        const bool branch_taken_0x1fdd80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fdd80) {
            ctx->pc = 0x1FDD9Cu;
            goto label_1fdd9c;
        }
    }
    ctx->pc = 0x1FDD88u;
    // 0x1fdd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdd8c: 0x0  nop
    ctx->pc = 0x1fdd8cu;
    // NOP
    // 0x1fdd90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fdd90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fdd94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDD94u;
    {
        const bool branch_taken_0x1fdd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd94) {
            ctx->pc = 0x1FDDB8u;
            goto label_1fddb8;
        }
    }
    ctx->pc = 0x1FDD9Cu;
label_1fdd9c:
    // 0x1fdd9c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fdd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fdda0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fdda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fdda4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fdda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fdda8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fdda8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fddac: 0x0  nop
    ctx->pc = 0x1fddacu;
    // NOP
    // 0x1fddb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fddb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fddb4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1fddb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1fddb8:
    // 0x1fddb8: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1fddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1fddbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fddbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fddc0: 0x0  nop
    ctx->pc = 0x1fddc0u;
    // NOP
    // 0x1fddc4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1fddc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fddc8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fddcc: 0xc440bfc4  lwc1        $f0, -0x403C($v0)
    ctx->pc = 0x1fddccu;
    { uint32_t bits = FAST_READ32(0x60BFC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fddd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fddd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fddd4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fddd8: 0xe440bfc4  swc1        $f0, -0x403C($v0)
    ctx->pc = 0x1fddd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFC4u, _value); } while (0); }
    // 0x1fdddc: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1FDDDCu;
    {
        const bool branch_taken_0x1fdddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdddc) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FDDE4u;
label_1fdde4:
    // 0x1fdde4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fdde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fdde8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fdde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fddec: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x1fddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x1fddf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fddf4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fddf8: 0x27859954  addiu       $a1, $gp, -0x66AC
    ctx->pc = 0x1fddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941012));
    // 0x1fddfc: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FDDFCu;
    SET_GPR_U32(ctx, 31, 0x1FDE04u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FDDFCu, 0x1FDE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE04u;
label_1fde04:
    // 0x1fde04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fde04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde08: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FDE08u;
    {
        const bool branch_taken_0x1fde08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fde08) {
            ctx->pc = 0x1FDE44u;
            goto label_1fde44;
        }
    }
    ctx->pc = 0x1FDE10u;
    // 0x1fde10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fde10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde14: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FDE14u;
    SET_GPR_U32(ctx, 31, 0x1FDE1Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FDE14u, 0x1FDE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE1Cu;
label_1fde1c:
    // 0x1fde1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fde1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde20: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1fde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fde24: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fde24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fde28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fde28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde2c: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1FDE2Cu;
    SET_GPR_U32(ctx, 31, 0x1FDE34u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1FDE2Cu, 0x1FDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE34u;
label_1fde34:
    // 0x1fde34: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fde34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fde38: 0xac62bfac  sw          $v0, -0x4054($v1)
    ctx->pc = 0x1fde38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BFACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFACu, _value); } while (0);
    // 0x1fde3c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1FDE3Cu;
    {
        const bool branch_taken_0x1fde3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde3c) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FDE44u;
label_1fde44:
    // 0x1fde44: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fde44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fde48: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1fde48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1fde4c: 0x24a58b10  addiu       $a1, $a1, -0x74F0
    ctx->pc = 0x1fde4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937360));
    // 0x1fde50: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1fde50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fde54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fde54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fde58: 0x27859958  addiu       $a1, $gp, -0x66A8
    ctx->pc = 0x1fde58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941016));
    // 0x1fde5c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FDE5Cu;
    SET_GPR_U32(ctx, 31, 0x1FDE64u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FDE5Cu, 0x1FDE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE64u;
label_1fde64:
    // 0x1fde64: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FDE64u;
    {
        const bool branch_taken_0x1fde64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fde64) {
            ctx->pc = 0x1FDE98u;
            goto label_1fde98;
        }
    }
    ctx->pc = 0x1FDE6Cu;
    // 0x1fde6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fde6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde70: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FDE70u;
    SET_GPR_U32(ctx, 31, 0x1FDE78u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FDE70u, 0x1FDE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE78u;
label_1fde78:
    // 0x1fde78: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fde78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fde7c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fde7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fde80: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1FDE80u;
    SET_GPR_U32(ctx, 31, 0x1FDE88u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1FDE80u, 0x1FDE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE88u;
label_1fde88:
    // 0x1fde88: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fde88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fde8c: 0xac62bfb0  sw          $v0, -0x4050($v1)
    ctx->pc = 0x1fde8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BFB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFB0u, _value); } while (0);
    // 0x1fde90: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1FDE90u;
    {
        const bool branch_taken_0x1fde90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde90) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FDE98u;
label_1fde98:
    // 0x1fde98: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fde98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fde9c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1fde9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1fdea0: 0x24a58b10  addiu       $a1, $a1, -0x74F0
    ctx->pc = 0x1fdea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937360));
    // 0x1fdea4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1fdea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fdea8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fdea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fdeac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdeb0: 0x2785995c  addiu       $a1, $gp, -0x66A4
    ctx->pc = 0x1fdeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941020));
    // 0x1fdeb4: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1FDEB4u;
    SET_GPR_U32(ctx, 31, 0x1FDEBCu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1FDEB4u, 0x1FDEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEBCu;
label_1fdebc:
    // 0x1fdebc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdec0: 0x14800026  bnez        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FDEC0u;
    {
        const bool branch_taken_0x1fdec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdec0) {
            ctx->pc = 0x1FDF5Cu;
            goto label_1fdf5c;
        }
    }
    ctx->pc = 0x1FDEC8u;
    // 0x1fdec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdecc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FDECCu;
    SET_GPR_U32(ctx, 31, 0x1FDED4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FDECCu, 0x1FDED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDED4u;
label_1fded4:
    // 0x1fded4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fded4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1fded8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fded8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdedc: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1FDEDCu;
    SET_GPR_U32(ctx, 31, 0x1FDEE4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1FDEDCu, 0x1FDEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEE4u;
label_1fdee4:
    // 0x1fdee4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdee8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1FDEE8u;
    SET_GPR_U32(ctx, 31, 0x1FDEF0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1FDEE8u, 0x1FDEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEF0u;
label_1fdef0:
    // 0x1fdef0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdef4: 0xe440bfc8  swc1        $f0, -0x4038($v0)
    ctx->pc = 0x1fdef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFC8u, _value); } while (0); }
    // 0x1fdef8: 0x8f84bb80  lw          $a0, -0x4480($gp)
    ctx->pc = 0x1fdef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1fdefc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1fdefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fdf00: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDF00u;
    {
        const bool branch_taken_0x1fdf00 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1fdf00) {
            ctx->pc = 0x1FDF1Cu;
            goto label_1fdf1c;
        }
    }
    ctx->pc = 0x1FDF08u;
    // 0x1fdf08: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fdf08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdf0c: 0x0  nop
    ctx->pc = 0x1fdf0cu;
    // NOP
    // 0x1fdf10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fdf10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fdf14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDF14u;
    {
        const bool branch_taken_0x1fdf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf14) {
            ctx->pc = 0x1FDF38u;
            goto label_1fdf38;
        }
    }
    ctx->pc = 0x1FDF1Cu;
label_1fdf1c:
    // 0x1fdf1c: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x1fdf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1fdf20: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1fdf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1fdf24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fdf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fdf28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdf28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdf2c: 0x0  nop
    ctx->pc = 0x1fdf2cu;
    // NOP
    // 0x1fdf30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fdf30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fdf34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1fdf34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1fdf38:
    // 0x1fdf38: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1fdf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1fdf3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdf40: 0x0  nop
    ctx->pc = 0x1fdf40u;
    // NOP
    // 0x1fdf44: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1fdf44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fdf48: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdf4c: 0xc440bfc8  lwc1        $f0, -0x4038($v0)
    ctx->pc = 0x1fdf4cu;
    { uint32_t bits = FAST_READ32(0x60BFC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdf50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fdf50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fdf54: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdf58: 0xe440bfc8  swc1        $f0, -0x4038($v0)
    ctx->pc = 0x1fdf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFC8u, _value); } while (0); }
label_1fdf5c:
    // 0x1fdf5c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1fdf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fdf60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdf60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf64:
    // 0x1fdf64: 0x2e020018  sltiu       $v0, $s0, 0x18
    ctx->pc = 0x1fdf64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1fdf68: 0x1440fd73  bnez        $v0, . + 4 + (-0x28D << 2)
    ctx->pc = 0x1FDF68u;
    {
        const bool branch_taken_0x1fdf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf68) {
            ctx->pc = 0x1FD538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd538;
        }
    }
    ctx->pc = 0x1FDF70u;
    // 0x1fdf70: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdf74: 0x8c43bfac  lw          $v1, -0x4054($v0)
    ctx->pc = 0x1fdf74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fdf78: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdf7c: 0x8c42bfb0  lw          $v0, -0x4050($v0)
    ctx->pc = 0x1fdf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BFB0u));
    // 0x1fdf80: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1fdf80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fdf84: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fdf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fdf88: 0xac43bfb4  sw          $v1, -0x404C($v0)
    ctx->pc = 0x1fdf88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60BFB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFB4u, _value); } while (0);
    // 0x1fdf8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fdf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdf90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fdf90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fdf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdf98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fdf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdf9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fdf9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdfa0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1fdfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fdfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDFACu;
    // 0x1fdfac: 0x0  nop
    ctx->pc = 0x1fdfacu;
    // NOP
    ctx->pc = 0x1fdfb0u;
}
